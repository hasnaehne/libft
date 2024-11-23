/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:45:53 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/19 22:44:18 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	len_s1;
	size_t	len_s2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	c = malloc ((len_s1 + len_s2 + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	ft_strlcpy(c, s1, (len_s1 + len_s2 + 1));
	ft_strlcat(c, s2, (len_s1 + len_s2 + 1));
	return (c);
}
