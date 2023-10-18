/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:44:00 by abostano          #+#    #+#             */
/*   Updated: 2023/10/18 15:41:02 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_useless(const char *s)
{
	int	a;

	a = 0;
	while ((s[a] <= 13 && s[a] >= 9) || s[a] == 32)
	{
		a++;
	}
	return (a);
}

int	ft_atoi(const char *str)
{
	int					a;
	int					flag;
	unsigned long int	result;

	result = 0;
	flag = 1;
	a = ft_useless(str);
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			flag = -1;
		a++;
	}
	while (str[a] <= '9' && str[a] >= '0')
	{
		result = result * 10 + (str[a] - 48);
		a++;
	}
	return (result * flag);
}
