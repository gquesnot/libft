/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquesnot <gquesnot@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 02:23:50 by gquesnot          #+#    #+#             */
/*   Updated: 2017/10/09 18:52:02 by gquesnot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstnew(const void *content, size_t content_size)
{
	t_list		*new;
	void		*tmp;

	if (!(new = malloc(1 * sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		tmp = ft_memalloc(content_size);
		ft_memcpy(tmp, content, content_size);
		new->content = tmp;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
