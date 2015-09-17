/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:23:21 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:57:09 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(dest);
	if (n < l)
		return (n + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && l + i < n - 1)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[i + l] = '\0';
	return (l + ft_strlen(src));
}
