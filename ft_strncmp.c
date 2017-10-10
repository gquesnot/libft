/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 22:10:25 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 22:00:08 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	char		c1;
	char		c2;

	i = 0;
	if (!n)
		return (0);
	while ((s1[i] || s2[i]) && i + 1 < n && (s1[i] == s2[i]))
		i++;
	c1 = s1[i];
	c2 = s2[i];
	if (c1 <= -127)
		c1 = (int)-c1 % 127;
	if (c2 <= -127)
		c2 = (int)-c2 % 127;
	return (c1 - c2);
}
