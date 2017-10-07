/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:56:07 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/07 19:32:57 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ss1;
	char	*ss2;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while (n > 0)
	{
		if (*ss1 != *ss2)
			return ((*ss1 - *ss2) * 256);
		ss1 = ss1 + 1;
		ss2 = ss2 + 1;
		n = n - 1;
	}
	return (0);
}
