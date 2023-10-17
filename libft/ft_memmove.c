/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:13:38 by abostano          #+#    #+#             */
/*   Updated: 2023/10/17 09:32:28 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t a)
{
	size_t	b;

	if (!d && !s)
		return (0);
	if (s < d)
	{
		b = a;
		while (b > 0)
		{
			b--;
			((unsigned char *)d)[b] = ((unsigned char *)s)[b];
		}
	}
	else
	{
		b = 0;
		while (b < a)
		{
			((unsigned char *)d)[b] = ((unsigned char *)s)[b];
			b++;
		}
	}
	return (d);
}
