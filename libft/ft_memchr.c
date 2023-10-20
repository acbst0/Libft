/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:41:57 by abostano          #+#    #+#             */
/*   Updated: 2023/10/20 10:30:24 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	a;
	char	*str;

	a = 0;
	str = (char *)ptr;
	while (a < n)
	{
		if ((unsigned char)str[a] == (unsigned char)c)
		{
			return ((char *)str + a);
		}
		a++;
	}
	return (NULL);
}
