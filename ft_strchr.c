/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 20:08:35 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/30 20:18:35 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	char	temp;
	int		i;

	i = 0;
	temp = (char)c;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == temp)
			return (char *)(s + i);
		i = i + 1;
	}
	return (NULL);
}
