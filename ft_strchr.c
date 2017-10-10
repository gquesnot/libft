/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 20:08:35 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 22:16:56 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	temp;
	int		i;

	i = 0;
	temp = (char)c;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == temp)
			return (char *)(s + i);
		i = i + 1;
	}
	if (s[i] == c)
		return (char *)(s + i);
	return (NULL);
}
