/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 23:14:10 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 23:14:10 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

void	ft_putchar(char c);
int		ft_print_char(char c);
int		ft_print_str(char *s);
char	*ft_itoa_16(unsigned long long n);
int		ft_print_pointer(unsigned long long pointer);
int		ft_print_big_x(unsigned int n);
int		ft_print_x(unsigned int n);
int		ft_numlen(long long n);
int		ft_printf_unsgnd(unsigned int num);
int		ft_printf_decimal(int num);
int		ft_printf(const char *input, ...);

#endif
