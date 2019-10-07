/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:54:45 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 18:23:50 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str_b, const char *str_a)
{
	unsigned int pos;
	unsigned int i;

	if (!*str_a)
		return ((char*)str_b);
	pos = 0;
	while (str_b[pos] != '\0')
	{
		if (str_b[pos] == str_a[0])
		{
			i = 1;
			while (str_a[i] != '\0' && str_b[pos + i] == str_a[i])
				++i;
			if (str_a[i] == '\0')
				return ((char*)&str_b[pos]);
		}
		++pos;
	}
	return (0);
}
