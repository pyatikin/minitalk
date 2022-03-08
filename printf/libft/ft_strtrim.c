/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmerrill <dmerrill@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:49:32 by dmerrill          #+#    #+#             */
/*   Updated: 2021/10/27 17:29:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		fst;
	int		lst;
	char	*out;

	out = NULL;
	if (!s1 || !set)
		return (out);
	else
	{
		fst = 0;
		lst = ft_strlen(s1);
		if (lst > 0)
			lst--;
		while (s1[fst] && ft_strchr(set, s1[fst]))
			fst++;
		while (lst >= 0 && ft_strchr(set, s1[lst]))
			lst--;
		if (lst - fst)
			out = ft_substr(s1, fst, lst - fst + 1);
		else
			out = ft_strdup("");
	}
	return (out);
}
