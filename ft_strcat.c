/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:50:27 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:53:12 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(dest);
	i = 0;
	while (*src != '\0')
	{
		dest[l + i] = *src++;
		i++;
	}
	return (dest);
}
