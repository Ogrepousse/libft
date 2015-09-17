/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:17:19 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:54:55 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	l;
	char	*dup;
	int		i;

	i = 0;
	l = ft_strlen(str);
	if ((dup = (char*)malloc(sizeof(char) * (l + 1))) != NULL)
	{
		while (*str != '\0')
		{
			dup[i++] = *str++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (NULL);
}
