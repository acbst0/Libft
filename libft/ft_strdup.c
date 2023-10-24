/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:16:43 by abostano          #+#    #+#             */
/*   Updated: 2023/10/24 10:45:15 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	a;
	char	*r;

	a = ft_strlen(str);
	r = (char *)malloc(sizeof(char) * (a + 1));
	if (!r)
		return (0);
	ft_strlcpy(r, str, a + 1);
	return (r);
}
