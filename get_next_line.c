/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:23:05 by jterrell          #+#    #+#             */
/*   Updated: 2019/10/05 13:10:30 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static t_descriptor		*ft_next_file_descriptor(const int fd,
		t_descriptor **first_file)
{
	t_descriptor			*elem;

	elem = *first_file;
	while (elem)
	{
		if (elem->fd == fd)
			return (elem);
		elem = elem->next;
	}
	if (!(elem = (t_descriptor*)malloc(sizeof(t_descriptor))))
		return (NULL);
	elem->fd = fd;
	elem->str = ft_strnew(0);
	elem->next = *first_file;
	*first_file = elem;
	return (elem);
}

static char				*ft_join_file_str(char **str, char *buf,
		size_t str_count)
{
	char				*newstr;

	if (!(newstr = ft_strnew(str_count + ft_strlen(buf) + 1)))
		return (NULL);
	ft_strcpy(newstr, *str);
	ft_strcat(newstr, buf);
	ft_strdel(str);
	*str = ft_strdup(newstr);
	ft_strdel(&newstr);
	return (*str);
}

static char				*write_in_line(char **line, char **fileline)
{
	size_t				i;
	char				*newstr;

	i = 0;
	while ((*fileline)[i] != '\n' && (*fileline)[i])
		i++;
	*line = ft_strnew(i);
	ft_strncpy(*line, *fileline, i);
	if (*fileline && ft_strchr(*fileline, '\n'))
		newstr = ft_strdup(ft_strchr(*fileline, '\n') + 1);
	else
		newstr = ft_strnew(0);
	(*line)[i] = '\0';
	ft_strdel(fileline);
	return (newstr);
}

int						get_next_line(const int fd, char **line)
{
	size_t				read_count;
	char				buf[BUFF_SIZE + 1];
	static t_descriptor	*head;
	t_descriptor		*elem;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	elem = ft_next_file_descriptor(fd, &head);
	while ((read_count = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[read_count] = '\0';
		elem->str = ft_join_file_str(&elem->str, buf, ft_strlen(elem->str));
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (!ft_strlen(elem->str))
		return (0);
	elem->str = write_in_line(line, &elem->str);
	return (1);
}
