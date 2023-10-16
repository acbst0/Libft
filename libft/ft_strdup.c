/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:16:43 by abostano          #+#    #+#             */
/*   Updated: 2023/10/14 16:37:14 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	a;
	char	*r;
	size_t	b;

	a = ft_strlen(str);
	r = (char *)malloc(sizeof(r) * (a + 1));
	b = 0;
	while (b < a)
	{
		r[b] = str[b];
		b++;
	}
	r[b] = '\0';
	return (r);
}
