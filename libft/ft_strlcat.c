/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:18:01 by abostano          #+#    #+#             */
/*   Updated: 2023/10/13 16:18:36 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	b = 0;
	a = ft_strlen(dest);
	while (a < size && (a + b) < (size - 1))
	{
		dest[a + b] = src[b];
		b++;
	}
	if (a < size)
		dest[a + b] = '\0';
	return (a + ft_strlen(src));
}
