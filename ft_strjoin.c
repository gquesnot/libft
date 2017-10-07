/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:04:05 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/07 21:10:40 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		total;
	char	*tmp;

	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2);
	tmp = ft_strnew(total);
	while (s1[j] != '\0')
	{
		tmp[i] = s1[j];
		i += 1;
		j += 1;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		tmp[i] = s2[j];
		i += 1;
		j += 1;
	}
	tmp[i] = '\0';
	return (tmp);
}
