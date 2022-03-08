/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerrill <dmerrill@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:06:53 by dmerrill          #+#    #+#             */
/*   Updated: 2021/10/27 16:22:15 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (--n && s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++ ;
		else
			break ;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
