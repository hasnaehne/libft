/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:57:59 by haqajjef          #+#    #+#             */
/*   Updated: 2024/12/12 15:20:57 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;
	unsigned char	d;

	d = (unsigned char) c;
	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = d;
		i++;
	}
	return (b);
}
