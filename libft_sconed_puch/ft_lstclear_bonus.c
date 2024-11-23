/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:18:23 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/19 18:11:26 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*suivant;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	while (tmp)
	{
		suivant = tmp->next;
		del (tmp -> content);
		free(tmp);
		tmp = suivant;
	}
	*lst = NULL;
}
