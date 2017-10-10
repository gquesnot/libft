/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 20:56:48 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 17:24:18 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(const char *s1, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = ft_strnew(len + 1);
	if (!tmp)
		return (NULL);
	while (i < len)
	{
		tmp[i] = s1[start + i];
		i += 1;
	}
	return (tmp);
}
