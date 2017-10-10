/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 22:26:49 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 20:07:09 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int			ft_isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1024);
	else
		return (0);
}
