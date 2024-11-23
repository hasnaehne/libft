/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:30:14 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/19 22:43:57 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	j;

	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	j = 0;
	while (j < dstsize - 1 && j < lensrc)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (lensrc);
}
