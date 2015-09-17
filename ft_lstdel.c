/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 13:38:33 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:43:33 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p;
	t_list	*p_b;

	p = *alst;
	while (p != NULL)
	{
		p_b = p->next;
		ft_lstdelone(&p, del);
		p = p_b;
	}
	*alst = NULL;
}
