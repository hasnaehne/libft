/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:48:05 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/17 15:19:16 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int s)
{
	if (s == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int		s;
	long	r;
	long	tmp;

	r = 0;
	s = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		tmp = r;
		r = r * 10 + (*str - '0');
		if (r / 10 != tmp)
			return (check(s));
		str++;
	}
	return ((int)(s * r));
}
