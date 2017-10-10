/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:18:00 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 20:46:31 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t		i;

	i = 0;
	s2 = (char *)src;
	s1 = (char *)dest;
	if (!n)
		return (dest);
	if (s1 > s2)
	{
		i = n;
		while ((int)i >= 0)
		{
		s1[i] = s2[i];
		 i -= 1;
		}
	s1[n] = '\0';
	}
	else
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i += 1;
		}
	}
//	s1[n + 1] = '\0';
	return (dest);
}
