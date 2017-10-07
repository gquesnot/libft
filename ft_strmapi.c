/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 20:36:31 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/07 20:49:18 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	unsigned int		i;

	i = 0;
	tmp = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i += 1;
	}
	return (tmp);
}
