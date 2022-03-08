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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*tm_s;
	char		*tm_d;

	tm_d = dest;
	tm_s = src;
	if (!dest && !src)
		return (NULL);
	if (tm_d < tm_s)
		while (n--)
			*tm_d++ = *tm_s++;
	else
	{
		tm_s = tm_s + (n - 1);
		tm_d = tm_d + (n - 1);
		while (n--)
			*tm_d-- = *tm_s--;
	}
	return (dest);
}
