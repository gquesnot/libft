/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:18:00 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/07 19:33:15 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	if (s1 < s2)
		ft_memcpy(s1, s2, n);
	else
	{
		while (n > 0)
		{
			*(s1 + n) = *(s2 + n);
			n = n - 1;
		}
	}
	return (dest);
}
