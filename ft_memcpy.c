/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:33:36 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 23:25:42 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s1;
	char		*s2;
	size_t		i;

	s1 = (char *)dest;
	s2 = (char *)src;
	i = 0;
	if (!n)
		return (dest);
	while (n > i)
	{
		s1[i] = s2[i];
		i++;
	}
	if (ft_strlen(dest) < ft_strlen(src))
		s1[i] = '\0';
	return (dest);
}
