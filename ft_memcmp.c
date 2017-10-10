/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:56:07 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 22:47:43 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char		*ss1;
	char		*ss2;
	size_t		i;
	char		c1;
	char		c2;


	ss1 = (char *)s1;
	ss2 = (char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (n > i + 1 && (ss1 || ss2) && (ss1[i] == ss2[i]))
		i += 1;
	c1 = ss1[i];
	c2 = ss2[i];
	if (c1 <= -127)
		c1 = (int)-c1 % 127;
	if (c2 <= -127)
		c2 = (int)-c2 % 127;
	return (c1 - c2);
}
