/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 20:36:31 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/07 20:46:09 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		tmp[i] = f(s[i]);
		i += 1;
	}
	return (tmp);
}
