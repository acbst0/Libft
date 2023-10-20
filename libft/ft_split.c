/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:05:11 by abostano          #+#    #+#             */
/*   Updated: 2023/10/20 12:18:28 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_lens(const char *s, char c, size_t n)
{
	size_t	flag;
	size_t	a;
	size_t	b;
	size_t	d;
	char	*st;

	st = (char *)s;
	a = 0;
	b = 0;
	flag = 0;
	while (flag != n)
	{
		if (st[a] == c && st[a - 1] != c && st[a + 1] != c)
			flag++;
		a++;
	}
	d = a;
	while (st[a] && st[a] != c)
	{
		b++;
		a++;
	}
	return ((char *)ft_substr(s, d, b));
}

static size_t	ft_len(const char *s, char c)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (s[a])
	{
		if (s[a] == c && s[a - 1] != c)
		{
			b++;
		}
		a++;
	}
	return (b + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	t;
	size_t	a;

	a = 0;
	t = ft_len(s, c);
	res = (char **)malloc(sizeof(char) * t);
	while (a <= t)
	{
		res[a] = ft_lens(s, c, a);
		a++;
	}
	return (res);
}
