/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 19:26:43 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 13:04:56 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	if (!(dest) || !(src))
		return (dest);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		 i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}

