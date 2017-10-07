/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 19:36:07 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/08 01:08:28 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int nbr, int fd)
{
	long		nb;

	nb = nbr;
	if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb <= 10)
		ft_putchar_fd('0' + nb, fd);
}
