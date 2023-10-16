/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:18:22 by abostano          #+#    #+#             */
/*   Updated: 2023/10/16 15:15:37 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(unsigned int n)
{
	int	a;
	int b;

	a = 1;
	b = 10;
	while ((n % b) >= 1)
	{
		b = b * 10;
		a++;
	}
	return (a);
}

char	*ft_turnit(int num, int sz)
{
	int	a;
	int	b;
	char	*ress;

	a = 0;
	b = 10;
	if (num < 0)
	{
		ress[a] = '-';
		a++;
		sz++;
	}
	while (a < sz)
	{
		ress[sz - a - 1] = (num % b) + 48;
		a++;
		b *= 10;
	}
	return (ress);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	size;

	size = ft_numlen((unsigned int)n);
	if (n < 0)
	{
		res = (char *)malloc(sizeof(char) * size + 2);
		res = ft_turnit(n, size);
	}
	else
	{
		res = (char *)malloc(sizeof(char) * size + 1);
		res = ft_turnit(n, size);
	}
	return (res);
}
