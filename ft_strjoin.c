/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:56:43 by abostano          #+#    #+#             */
/*   Updated: 2023/10/16 12:13:40 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*r;
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (!str1 || !str2)
		return (0);
	r = (char *)malloc((ft_strlen(str1) + ft_strlen(str2)) * sizeof(char) + 1);
	if (!r)
		return (0);
	while (str1[a])
	{
		r[a] = str1[a];
		a++;
	}
	while (str2[b])
	{
		r[a] = str2[b];
		a++;
		b++;
	}
	r[a] = '\0';
	return (r);
}
