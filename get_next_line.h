/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:23:19 by jterrell          #+#    #+#             */
/*   Updated: 2019/10/03 15:23:44 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 32

typedef struct			s_descriptor
{
	int					fd;
	char				*str;
	struct s_descriptor	*next;
}						t_descriptor;

int						get_next_line(const int fd, char **line);

#endif
