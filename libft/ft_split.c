/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:05:11 by abostano          #+#    #+#             */
/*   Updated: 2023/10/18 17:05:54 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *s, char c)
{
	size_t	a;

	a = 0;
	while (s[a])
	{
		if (s[a] != c)
		{
			a++;
			while (s[a] && s[a] != c)
				s++;
		}
		else
			s++;
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	b;
	char	**p;

	if (!s)
		return (0);
	b = 0;
	p = malloc(sizeof(char *) * (ft_len(s, c) + 1));
	if (!p)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			a = 0;
			while (s[a] && s[a] != c && a++)
				s++;
			p[b++] = ft_substr(s - a, 0, a);
		}
		else
			s++;
	}
	p[b] = 0;
	return (p);
}
