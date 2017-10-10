/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 22:10:25 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 21:53:42 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	char c1;
	char c2;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i = i + 1;
	c1 = s1[i];
	c2 = s2[i];
	if (s1[i] <= -127)
		c1 = (int)-c1 % 127;
	if (s2[i] <= -127)
		c2 = (int)-c2 % 127;
	return (c1 - c2);
}
