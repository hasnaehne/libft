/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:41:53 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/17 11:01:48 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newcontent;
	t_list	*newnode;
	t_list	*newlst;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = malloc (sizeof(t_list));
		if (newnode == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		newnode->content = newcontent;
		newnode->next = NULL;
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
