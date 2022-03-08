/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 23:14:54 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 23:14:54 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wht_zero(int n, int sign)
{
	if (sign == 0 && n < 0)
		return (-1);
	if (sign == -1 && n > 0)
		return (0);
	return (n);
}

int	ft_atoi(const char *s)
{
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == 45)
	{
		sign = -1;
		s++;
	}
	else if (*s == 43)
		s++;
	while (*s >= 48 && *s <= 57)
		num = 10 * num + *(s++) - 48;
	if (sign == -1)
		num = -num;
	if (wht_zero(num, sign) == -1 || wht_zero(num, sign) == 0)
		return (wht_zero(num, sign));
	return (num);
}
