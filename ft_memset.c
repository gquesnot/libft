/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 12:09:55 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/29 12:35:07 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *s, int c, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n > 0)
	{
		*temp = (char)c;
		if (n > 0)
			temp = temp + 1;
		n = n - 1;
	}
	return (s);
}
