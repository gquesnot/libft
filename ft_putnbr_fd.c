/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/01 19:36:07 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/08 21:06:15 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr2_fd(int nbr, int fd)
{
	nbr = -nbr - 2000000000;
	ft_putstr_fd("-2", fd);
	ft_putnbr_fd(nbr, fd);
}

void		ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
		{
			ft_putnbr2_fd(nbr, fd);
			return ;
		}
	if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar_fd('-', fd);
		}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd('0' + nbr, fd);
}
