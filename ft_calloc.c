/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:55:03 by abostano          #+#    #+#             */
/*   Updated: 2023/10/14 15:12:46 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	sz;
	void	*n;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	sz = num * size;
	n = malloc(sz);
	if (n == NULL)
		return (0);
	else
		ft_bzero(n, sz);
	return (n);
}
