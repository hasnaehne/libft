/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:51:55 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/22 15:07:09 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (ft_strlen(src));
	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	i = lendst;
	j = 0;
	while (src[j] && (i + j < dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst [i + j] = '\0';
	return (lendst + lensrc);
}
#include <libc.h>
int main()
{
	char dst[10] = "hasnae";
	char src[] = "abc";
	printf("%s",dst);
	printf("%zu\n",ft_strlcat(dst,src,3));
	printf("%s",dst);
}