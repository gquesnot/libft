/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnequ.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gquesnot <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 13:40:41 by gquesnot     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/28 14:24:55 by gquesnot    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			return (1);
	}
	return (0);
}
