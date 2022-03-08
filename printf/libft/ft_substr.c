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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;
	int		min_mem;

	min_mem = len;
	i = 0;
	if (!s || (start >= ft_strlen(s)) || !len)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		min_mem = ft_strlen(s) - start;
	out = (char *)malloc(min_mem + 1);
	if (!out)
		return (NULL);
	while (len && s[start])
	{
		out[i] = s[start + i];
		i++;
		len--;
	}
	out[i] = '\0';
	return (out);
}
