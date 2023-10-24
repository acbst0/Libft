/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostano <abostano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:50:33 by abostano          #+#    #+#             */
/*   Updated: 2023/10/24 17:15:11 by abostano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del || !*lst)
		return ;
	node = *lst;
	while (*lst)
	{
		node = (*lst)-> next;
		ft_lstdelone (*lst, del);
		*lst = node;
	}
	*lst = NULL;
}
