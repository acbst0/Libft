/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:13:38 by abostano          #+#    #+#             */
/*   Updated: 2023/10/20 17:45:08 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nxt;

	if (!nxt)
		return (0);
	nxt = malloc(sizeof(t_list));
	nxt->content = content;
	nxt->next = NULL;
	return (nxt);
}
