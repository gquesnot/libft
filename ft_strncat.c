/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 19:33:24 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 16:18:13 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i += 1;
	if (!n || !src)
		return (dest);
	while (n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j += 1;
		n -= 1;
	}
	if (dest)
		dest[i + j] = '\0';
	return (dest);
}
