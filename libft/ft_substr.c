/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:37:49 by abostano          #+#    #+#             */
/*   Updated: 2023/10/14 16:51:37 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*subs;

	a = 0;
	subs = (char *)malloc(sizeof(subs) * (len - start));
	if (subs == 0)
		return (0);
	while (start < len)
	{
		subs[a] = s[start];
		start++;
		a++;
	}
	return (subs);
}
