/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:11:58 by abostano          #+#    #+#             */
/*   Updated: 2023/10/20 17:10:09 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = 0;
	while (*str)
	{
		if (*str == (unsigned char)c)
			ret = (char *)str;
		str++;
	}
	if (!c)
		ret = ((char *)str);
	return (ret);
}
