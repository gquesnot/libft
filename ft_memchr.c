/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:43:18 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/30 20:37:05 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *s1;
	char c1;
	size_t i;

	s1 = (char *)s;
	c1 = (char)c;
	i = 0;
	while(s1[i] && i < n)
	{
		if (s1[i] == c1)
			return ((void *)(s + i));
		i = i + 1;
	}
	return (NULL);
}
