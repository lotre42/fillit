/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 10:03:21 by kahantar          #+#    #+#             */
/*   Updated: 2017/01/23 19:38:35 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		push_back(t_list **head, t_list *elem)
{
	t_list	*ptr;

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = elem;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nlist;

	nlist = NULL;
	while (lst)
	{
		if (nlist == NULL)
			ft_lstadd(&nlist, f(lst));
		else
			push_back(&nlist, f(lst));
		lst = lst->next;
	}
	return (nlist);
}
