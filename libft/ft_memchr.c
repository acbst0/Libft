/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:41:57 by abostano          #+#    #+#             */
/*   Updated: 2023/10/18 11:23:28 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	a;
	char	*str;
	char	*p;

	a = 0;
	str = (char *)ptr;
	while (a < n)
	{
		if (str[a] == c)
		{
			p = &str[a];
			return ((char *)p);
		}
		a++;
	}
	return (0);
}
