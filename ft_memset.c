/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 12:09:55 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/08 02:01:28 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	
	i = 0;
	while (i < n)
	{
		((char*)s)[i] = (unsigned char)c;
		i += 1;
	}
	return (s);
}
