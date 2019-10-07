/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:59:49 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/18 16:32:54 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str_b, const char *str_a, size_t len)
{
	size_t	pos;
	size_t	i;

	if (!*str_a)
		return ((char*)str_b);
	pos = 0;
	while (str_b[pos] != '\0' && (size_t)pos < len)
	{
		if (str_b[pos] == str_a[0])
		{
			i = 1;
			while (str_a[i] != '\0' && str_b[pos + i] == str_a[i] &&\
			(size_t)(pos + i) < len)
				++i;
			if (str_a[i] == '\0')
				return ((char*)&str_b[pos]);
		}
		++pos;
	}
	return (0);
}
