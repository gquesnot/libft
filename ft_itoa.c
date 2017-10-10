/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 00:14:18 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 20:14:42 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_is_neg(long *n, int *neg)
{
	if (*n < 0)
	{
		*neg = 1;
		*n = -(*n);
	}
}

char		*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		i;
	int		neg;

	neg = 0;
	i = 2;
	nb = (long)n;
	ft_is_neg(&nb, &neg);
	i = i + neg;
	while (n /= 10)
		i += 1;
	res = ft_strnew(i);
	i -= 1;
	res[i] = '\0';
	while (i > 0)
	{
		i -= 1;
		res[i] = nb % 10 + '0';
		nb /= 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
