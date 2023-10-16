/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:29:50 by abostano          #+#    #+#             */
/*   Updated: 2023/10/14 12:47:27 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	a;

	a = 0;
	s1 = (char *)ptr1;
	s2 = (char *)ptr2;
	while (a < n)
	{
		if (s1[a] != s2[a])
			return ((unsigned char)s1[a] - ((unsigned char)s2[a]));
		a++;
	}
	return (0);
}
