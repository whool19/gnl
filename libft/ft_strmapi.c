/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:15:11 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/10 19:26:28 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;
	int				j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		if ((fstr = (char *)malloc(j * sizeof(char) + 1)))
		{
			while (s[i] != 0)
			{
				fstr[i] = f(i, s[i]);
				i++;
			}
			fstr[i] = '\0';
			return (fstr);
		}
	}
	return (NULL);
}
