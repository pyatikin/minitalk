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
