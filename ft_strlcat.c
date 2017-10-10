/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 19:33:24 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 22:38:17 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (n == 0)
		return (ft_strlen(dest));
	while (dest[i] != '\0')
		i += 1;
	if (!src || i >= n)
		return (ft_strlen(src) + n);
	while ((i + j + 1) < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j += 1;
	}
	if (dest)
		dest[i + j] = '\0';
	return (i  + ft_strlen(src));
}
