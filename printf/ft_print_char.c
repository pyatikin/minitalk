/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 23:13:21 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 23:13:21 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

int	ft_print_char(char c)
{
	int	i;

	i = 0;
	ft_putchar(c);
	return (i + 1);
}
