/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:43:52 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:48:18 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		p[i++] = '\0';
	}
}
