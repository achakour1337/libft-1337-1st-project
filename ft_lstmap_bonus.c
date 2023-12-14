/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:36:32 by achakour          #+#    #+#             */
/*   Updated: 2023/11/30 14:58:07 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*little_mapi(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	char	flag;
	void	*tmp;
	t_list	*iter;
	t_list	*head;

	flag = '1';
	while (lst != NULL)
	{
		tmp = f(lst->content);
		iter = ft_lstnew(tmp);
		if (flag == '1')
			head = iter;
		if (iter == NULL)
		{
			del(tmp);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, iter);
		lst = lst->next;
		flag = '0';
	}
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	if (lst == NULL || !f || !del)
		return (0);
	head = little_mapi(lst, f, del);
	return (head);
}
