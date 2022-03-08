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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	n;

	n = 0;
	while (dst[n] && ((size_t)n < size))
		n++;
	i = n;
	while (src[n - i] && (size_t)(n + 1) < size)
	{
		dst[n] = src[n - i];
		n++;
	}
	if ((size_t)i < size)
		dst[n] = '\0';
	n = ft_strlen(src) + i;
	return (n);
}
