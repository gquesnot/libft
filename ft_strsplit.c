/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 21:31:26 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 17:24:54 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strchr_count(const char *s, char c)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i += 1;
		}
		while (s[i] != c && s[i] != '\0')
			i += 1;
		res = res + 1;
	}
	return (res);
}

char		**ft_add_str_table(char **table, const char *str, int n, int size)
{
	int		i;

	i = 0;
	while (table[i])
		i += 1;
	table[i] = ft_strnew(size + 1);
	table[i] = ft_strsub(str, n, size);
	table[i + 1] = NULL;
	return (table);
}



char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		start;
	char	**res;

	start = 0;
	i = 0;
	res = NULL;
	res = malloc(ft_strchr_count(s, c) * sizeof(char *));
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i] != '\0')
				i += 1;
			start = i;
		}
		while (s[i] != c && s[i] != '\0')
			i += 1;
		if (i > start)
			res = ft_add_str_table(res, s, start, i - start);
	}
	return (res);
}
