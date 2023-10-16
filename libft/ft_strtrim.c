/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:17:31 by abostano          #+#    #+#             */
/*   Updated: 2023/10/16 13:01:38 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	a;
	size_t	b;
	char	*r;

	r = 0;
	if (s1 != 0 && set != 0)
	{
		a = 0;
		b = ft_strlen(s1);
		while (s1[a] && ft_strchr(set, s1[a]))
			a++;
		while (s1[b - 1] && ft_strchr(set, s1[b - 1]) && b > a)
			b--;
		r = (char *)malloc(sizeof(char) * (b - a + 1));
		if (r)
			ft_strlcpy(r, &s1[a], b - a + 1);
	}
	return (r);
}
