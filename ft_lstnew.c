/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 10:01:04 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:44:27 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	if ((l = (t_list*)malloc(sizeof(*l))))
	{
		l->next = NULL;
		if (content == NULL)
		{
			l->content = NULL;
			l->content_size = 0;
			return (l);
		}
		l->content = malloc(content_size);
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
		return (l);
	}
	return (NULL);
}
