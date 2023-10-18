/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:37:49 by abostano          #+#    #+#             */
/*   Updated: 2023/10/18 16:08:58 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*subs;

	a = 0;
	subs = (char *)malloc(sizeof(char) * (start - len));
	if (subs == NULL)
		return (0);
	while (a < len)
	{
		subs[a] = s[start];
		start++;
		a++;
	}
	subs[a] = '\0';
	return (subs);
}
