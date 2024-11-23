/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:57:59 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/21 16:41:22 by haqajjef         ###   ########.fr       */
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
// #include <stdio.h>
// #include <string.h> 

// int main()
// {
//     char s[] = "hasnae";
//     fy_memset(&s, 0b11001010, 1); 
//     printf("%d\n", (unsigned char)s[0]); 
//     return 0;
// }

