/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:21:23 by abostano          #+#    #+#             */
/*   Updated: 2023/10/16 10:09:48 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	a;

	a = 0;
	while (str1[a] && str2[a] && a < n)
	{
		if (str1[a] == str2[a])
		{
			a++;
		}
		else
		{
			if (str1[a] < str2[a])
				return (-1);
			else if (str1[a] > str2[a])
				return (1);
		}
	}
	return (0);
}
