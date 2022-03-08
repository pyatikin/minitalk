/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerrill <dmerrill@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:26:58 by dmerrill          #+#    #+#             */
/*   Updated: 2022/01/12 13:51:47 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_new;
	const unsigned char	*s2_new;

	i = 0;
	s1_new = s1;
	s2_new = s2;
	while (i < n)
	{
		if ((s1_new[i] > (s2_new)[i]) ||
		(s1_new[i] < (s2_new)[i]))
			return ((int)(s1_new[i] - (s2_new)[i]));
		i++;
	}
	return (0);
}
