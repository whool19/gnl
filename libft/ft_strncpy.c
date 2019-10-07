/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:18:18 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 18:20:32 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *destination, const char *source, size_t n)
{
	size_t	i;

	i = 0;
	while (source[i] != '\0' && i < n)
	{
		destination[i] = source[i];
		++i;
	}
	while (i < n)
	{
		destination[i] = '\0';
		i++;
	}
	return (destination);
}
