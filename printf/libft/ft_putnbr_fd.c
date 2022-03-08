/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerrill <dmerrill@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:55:18 by dmerrill          #+#    #+#             */
/*   Updated: 2022/01/07 19:43:37 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(long long n)
{
	size_t	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static long long	ft_pow(long long a, int b)
{
	if (b == 0)
		return (1);
	while (--b)
		a = a * 10;
	return (a);
}

static void	output(long n, int fd)
{
	char	out;
	int		i;

	i = ft_size(n);
	while (i > 0)
	{
		out = n / ft_pow(10, i - 1) + 48;
		write(fd, &out, 1);
		n = n % ft_pow(10, i - 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	output(nbr, fd);
}
