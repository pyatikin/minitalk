/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 23:13:37 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 23:13:37 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long pointer)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_itoa_16(pointer);
	i += ft_print_str("0x") + ft_print_str(s);
	free(s);
	return (i);
}
