/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:02:01 by abostano          #+#    #+#             */
/*   Updated: 2023/10/16 14:07:52 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_longs(const char *s, char c)
{
	int	a;
	int	d;
	int	c;
	int *res;

	a = 0;
	d = 0;
	c = 0;
	if (s[a] == c )
		a++;
	while (s[a])
	{
		while (s[a] != c)
		{
			a++;
			d++;
		}
		res[c] = d;
		c++;
		a++;
		d = 0;
	}
	return (res);
}

char	**ft_spt(char const *s, char c)
{
	int	a;
	int	b;
	int	d;
	char	**str;

	a = 0;
	b = 0;
	c = 0;
	
	while(s[a])
	{
		if (s[a] == c)
		{
			str[b][a] = '\0'; 
			b++;
			a++;
			d = 0;
		}
		else
		{
			str[b][d] = s[a];
			d++;
			a++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	
}