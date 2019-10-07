/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:30:30 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/09 11:30:39 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_sub;

	if (!s)
		return (NULL);
	new_sub = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (new_sub == NULL)
		return (NULL);
	new_sub = (char *)ft_memcpy(new_sub, (s + start), len);
	return (new_sub);
}
