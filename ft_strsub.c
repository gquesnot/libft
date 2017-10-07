/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 20:56:48 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/07 21:03:56 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(const char *s1, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*tmp;

	tmp = ft_strnew(len);
	while (i < len)
	{
		tmp[i] = s1[start + i];
		i += 1;
	}
	return (tmp);
}
