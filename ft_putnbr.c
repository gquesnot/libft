/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 19:36:07 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/08 21:02:17 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr2(int nbr)
{
	nbr = -nbr - 2000000000;
	ft_putstr("-2");
	ft_putnbr(nbr);
}

void		ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		{
			ft_putnbr2(nbr);
			return ;
		}
	if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar('0' + nbr);
}
