/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jterrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:38:50 by jterrell          #+#    #+#             */
/*   Updated: 2019/09/11 19:29:29 by jterrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check(unsigned long long num, int sign, unsigned long long test)
{
	if (num > test && sign == 1)
		return (-1);
	else if (num > test && sign == -1)
		return (0);
	return (num * sign);
}

int				ft_atoi(const char *str)
{
	int					i;
	unsigned long long	num;
	int					sign;
	unsigned long long	test;

	test = 9223372036854775807;
	i = 0;
	num = 0;
	sign = 1;
	while (*(str + i) == '\n' ||\
	*(str + i) == '\t' ||\
	*(str + i) == '\r' ||\
	*(str + i) == '\v' ||\
	*(str + i) == '\f' ||\
	*(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9' && num < test)
		num = num * 10 + (*(str + i++) - '0');
	if ((num > test && sign == 1) || (num > test && sign == -1))
		return (check(num, sign, test));
	return (num * sign);
}
