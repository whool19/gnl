/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:44:45 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/04 17:48:11 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int ch)
{
	char	*last_pos;

	last_pos = (0);
	while (*str)
	{
		if (*str == ch)
			last_pos = (char*)str;
		++str;
	}
	if (last_pos)
		return (last_pos);
	if (ch == '\0')
		return ((char*)str);
	return (0);
}
