/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:57:30 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/17 10:53:32 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;
	size_t	ms;

	ms = count * size;
	if (size != 0 && (ms / size) != count)
		return (NULL);
	tab = malloc(ms);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, ms);
	return (tab);
}
