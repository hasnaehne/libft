/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:15:53 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/20 11:24:57 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	unsigned char		*org;

	ptr = (unsigned char *)dst;
	org = (unsigned char *)src;
	i = 0;
	if (ptr == org)
		return (dst);
	if (ptr < org)
	{
		while (i < len)
		{
			ptr[i] = org[i];
			i++;
		}
	}
	else
	{
		while (len--)
			ptr[len] = org[len];
	}
	return (dst);
}
