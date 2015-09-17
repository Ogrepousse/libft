/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:43:52 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:46:17 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char*)s;
	i = 0;
	while (i != n && *p)
	{
		if (*p == (unsigned char)c)
		{
			return (&(*p));
		}
		i++;
		p++;
	}
	return (NULL);
}
