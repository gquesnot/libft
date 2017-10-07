/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 00:14:18 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/08 00:57:35 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcatc(const char *s, char c)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(s))
	{
		tmp = ft_strnew(2);
		tmp[0] = c;
		tmp[1] = '\0';
		return (tmp);
	}
	tmp = ft_strnew(ft_strlen(s) + 2);
	tmp = ft_strdup(s);
	while (tmp[i] != '\0')
		i += 1;
	tmp[i] = c;
	tmp[i + 1] = '\0';
	return (tmp);
}

char		*ft_itoa(int n)
{
	long	max;
	char	*res;
	long	nb;

	max = 1;
	res = ft_strnew(2);
	nb = n;
	if (nb < 0)
	{
		*res = '-';
		*(res + 1) = '\0';
		nb = -nb;
	}
	while (max <= nb)
		max *= 10;
	while (nb > 10)
	{
		max /= 10;
		res = ft_strcatc(res, '0' + (nb / max));
		nb = nb % max;
	}
	res = ft_strcatc(res, '0' + nb);
	return (res);
}
