/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:15:29 by abostano          #+#    #+#             */
/*   Updated: 2023/10/17 13:34:11 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	unsigned int	leng;
	char			*res;

	if (!s)
		return (0);
	leng = ft_strlen(s);
	res = malloc(leng * sizeof(char) + 1);
	if (!res)
		return (0);
	a = 0;
	while (a < leng)
	{
		res[a] = (*f)(a, s[a]);
		a++;
	}
	res[a] = '\0';
	return (res);
}
