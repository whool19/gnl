/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:08:56 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/11 19:18:01 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*fstr;
	int		i;
	int		j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		if ((fstr = (char *)malloc(j * sizeof(char) + 1)))
		{
			while (s[i] != 0)
			{
				fstr[i] = f(s[i]);
				i++;
			}
			fstr[i] = '\0';
			return (fstr);
		}
	}
	return (NULL);
}
