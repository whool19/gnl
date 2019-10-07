/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:14:38 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/10 20:07:35 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;
	size_t	j;

	j = 1;
	i = 0;
	if ((res = (char*)malloc(size + j)) && size)
	{
		while (i < size)
		{
			res[i] = 0;
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	return (res);
}
