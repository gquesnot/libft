/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 19:04:14 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/30 20:57:34 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*s1;
	int		i;
	int		len;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	s1 = (char *)malloc((len + 1) * sizeof(char));
	while (s[i])
	{
		s1[i] = s[i];
		i = i + 1;
	}
	s1[i] = '\0';
	return (s1);
}
