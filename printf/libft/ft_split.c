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

static void	spliting(char ***src, const char *s, char c)
{
	int	len;
	int	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		while (s[len] != c && s[len])
			len++;
		if (len)
		{
			(*src)[i] = ft_substr(s, 0, len);
			if (!(*src)[i])
			{
				free(*src);
				*src = NULL;
				break ;
			}
			i++;
			s = s + len;
		}
	}
}

static int	counter(const char *s, char c)
{
	int	i;

	i = 0;
	if (s[0] != c && s[0])
		i = 1;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			if (!(*s))
				break ;
			i++;
		}
		s++;
	}
	return (i);
}

char	**ft_split(char const *s1, char c)
{
	char	**s;
	int		i;

	if (s1 != NULL)
	{
		i = counter(s1, c);
		s = (char **)malloc(sizeof(char *) * (i + 1));
		if (s)
		{
			s[i] = NULL;
			spliting(&s, s1, c);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
	return (s);
}
