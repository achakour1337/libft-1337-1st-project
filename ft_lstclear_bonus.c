/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 20:59:13 by achakour          #+#    #+#             */
/*   Updated: 2023/11/30 14:57:45 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst == NULL || *lst == NULL || !del)
	{
		return ;
	}
	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
	*lst = NULL;
}
