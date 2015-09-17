/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:06:23 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:57:09 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;
	size_t	l;

	l = ft_strlen(s2);
	i = 0;
	if (s2 == NULL || s2[0] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && i < n && l <= n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j] != '\0' && s2[j] != '\0'
				&& i + j < n)
			j++;
		if (s2[j] == '\0' && j != 0)
			return ((char*)(&s1[i]));
		i++;
	}
	return (NULL);
}
