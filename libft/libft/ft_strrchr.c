/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:11:58 by abostano          #+#    #+#             */
/*   Updated: 2023/10/24 11:25:57 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = NULL;
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
