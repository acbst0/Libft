/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:13:38 by abostano          #+#    #+#             */
/*   Updated: 2023/10/24 17:05:52 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nxt;

	nxt = malloc(sizeof(t_list));
	if (!nxt)
		return (NULL);
	nxt->content = content;
	nxt->next = NULL;
	return (nxt);
}
