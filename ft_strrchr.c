/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 20:08:35 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/30 20:56:14 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	temp;
	int		i;
	int		last;

	i = 0;
	last = 0;
	temp = (char)c;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == temp)
			last  = i;
		i = i + 1;
	}
	if (last == 0)
		return (NULL);
	else
		return (char *)(s + last);
}
