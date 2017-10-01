/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:33:36 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/29 15:41:40 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	if (n == 0 || s1 == s2)
		return (dest);
	while (n > 0)
	{
		*s1 = *s2;
		s1 = s1 + 1;
		s2 = s2 + 1;
		n = n - 1;
	}
	return (dest);
}
