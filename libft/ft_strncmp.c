/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:21:23 by abostano          #+#    #+#             */
/*   Updated: 2023/10/18 11:20:23 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 != '\0' && *str1 == *str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
