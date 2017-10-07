/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 20:51:40 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/07 20:56:10 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!(s1) || !(s2))
		return (0);
	if (ft_strncmp(s1, s2, n))
		return (1);
	return (0);
}
