/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerrill <dmerrill@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:33:45 by dmerrill          #+#    #+#             */
/*   Updated: 2022/01/12 13:50:25 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*new_stack;
	size_t	i;
	size_t	cur;
	size_t	ne_len;

	i = 0;
	new_stack = (char *)haystack;
	ne_len = ft_strlen(needle);
	if (!ne_len || haystack == needle)
		return (new_stack);
	while (new_stack[i] && i < len)
	{
		cur = i;
		while (new_stack[cur] && needle[cur - i]
			&& new_stack[cur] == needle[cur - i] && cur < len)
			cur++;
		if ((cur - i) == ne_len)
			return (new_stack + i);
		i++;
	}
	return (0);
}
