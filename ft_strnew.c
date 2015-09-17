/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:23:15 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:57:09 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*p;

	p = (char*)malloc(sizeof(char) * (n + 1));
	if (p != NULL)
	{
		ft_memset(p, '\0', n + 1);
		return (p);
	}
	return (NULL);
}
