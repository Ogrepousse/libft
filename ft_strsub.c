/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:16:47 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 13:04:48 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	if ((p = ft_strnew(len)) != NULL)
	{
		i = 0;
		while (i < len)
		{
			p[i] = s[start + i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
