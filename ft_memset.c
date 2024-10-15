/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:14:38 by abostano          #+#    #+#             */
/*   Updated: 2023/10/13 12:16:22 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t a)
{
	size_t	i;
	char	*p;

	p = (char *)str;
	i = 0;
	while (i < a)
	{
		p[i] = x;
		i++;
	}
	return (p);
}
