/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerrill <dmerrill@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:36:01 by dmerrill          #+#    #+#             */
/*   Updated: 2021/10/27 12:42:01 by                  ###   ########.fr       */
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
