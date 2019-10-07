/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:29:36 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/18 15:14:49 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char			*ft_strncat(char *destination, const char *append, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (destination[i] != '\0')
		i++;
	j = 0;
	while (append[j] != '\0' && j < n)
	{
		destination[i] = append[j];
		i++;
		j++;
	}
	destination[i] = '\0';
	return (destination);
}
