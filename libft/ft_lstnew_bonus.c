/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:43:20 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/14 17:41:36 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nouve;

	nouve = malloc (sizeof (t_list));
	if (!nouve)
		return (NULL);
	nouve->content = content;
	nouve->next = NULL;
	return (nouve);
}
