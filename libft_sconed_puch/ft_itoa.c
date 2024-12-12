/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haqajjef <haqajjef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:56:18 by haqajjef          #+#    #+#             */
/*   Updated: 2024/11/17 16:09:40 by haqajjef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_chiff(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*wr_fct(char *s, int nb, int len)
{
	int		i;
	long	nbr;

	nbr = nb;
	if (nbr == 0)
		s [0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		if (nbr == -2147483648)
		{
			s[--len] = '8';
			nbr = -(nbr / 10);
		}
		else
			nbr = -nbr;
	}
	i = len - 1;
	while (nbr > 0)
	{
		s[i--] = (nbr % 10) + '0';
		nbr = (nbr / 10);
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	int		len;
	long	nbr;

	nbr = n;
	len = count_chiff(nbr);
	tmp = malloc((len + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	tmp[len] = '\0';
	tmp = wr_fct(tmp, n, len);
	return (tmp);
}
