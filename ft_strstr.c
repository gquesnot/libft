/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 21:11:31 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 16:41:53 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	if (s2[0] == '\0')
		return (char *)(s1);
	while (s1[i] != '\0')
	{
		j = 0;
		if (s1[i + j] == s2[j])
		{
			while (s2[j] == s1[i + j])
			{
				j = j + 1;
				if (s2[j] == '\0')
					return (char *)(s1 + i);
			}
		}
		i += 1;
	}
	return (NULL);
}

