/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:02:59 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 16:03:00 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*ar1;
	unsigned char	*ar2;
	size_t			i;

	i = 0;
	ar1 = (unsigned char *)arr1;
	ar2 = (unsigned char *)arr2;
	while (i < n)
	{
		if (ar1[i] != ar2[i])
			return (ar1[i] - ar2[i]);
		i++;
	}
	return (0);
}
