/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:10:45 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 19:57:47 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	int		i;
	int		start;
	int		size;
	char	*tmp;

	i = 0;
	size = ft_strlen(s);
	tmp = ft_strnew(size);
	if (!(s) || !(tmp))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',')
		i += 1;
	start = i;
	i = 0;
	size = size - 1;
	while (start + i < size && (s[size - i] == ' ' || s[size - i] == '\t' || s[size - i] == '\n' \
			|| s[size - i] == ','))
		i += 1;
	tmp = ft_strsub(s, start , size - start - i + 1);
	return (tmp);
}
