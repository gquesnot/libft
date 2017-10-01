/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:42:28 by gquesnot          #+#    #+#             */
/*   Updated: 2017/09/30 22:58:49 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char c1;
	int  c;
	char c2;


	c1 = 'A';
	c = (int)c1;
	c1 = (char)ft_toupper(c);
	c2 = (char)ft_tolower(c);

	printf("%c\n%c\n",c1, c2);

}
