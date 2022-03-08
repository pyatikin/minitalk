/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_udecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 23:13:57 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 23:13:57 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnumb(long n, char *str)
{
	int	size;

	size = ft_numlen(n);
	str[size] = '\0';
	while (n > 9)
	{
		str[--size] = (n % 10) + 48;
		n = n / 10;
	}
	str[0] = n + 48;
}

static char	*ft_itoa_unsgnd(unsigned int n)
{
	char	*str;
	long	num;

	num = n;
	str = malloc(ft_numlen(num) + 1);
	if (!str)
	{
		free (str);
		return (NULL);
	}
	ft_putnumb(num, str);
	return (str);
}

int	ft_printf_unsgnd(unsigned int num)
{
	char	*a;

	a = ft_itoa_unsgnd(num);
	ft_putstr_fd(a, 1);
	free(a);
	return (ft_numlen((num)));
}
