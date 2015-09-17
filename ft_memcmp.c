/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:43:52 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:47:11 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				res;
	unsigned char	*s12;
	unsigned char	*s22;

	s12 = (unsigned char*)s1;
	s22 = (unsigned char*)s2;
	i = 0;
	res = 0;
	while (i < n && s12[i] != '\0' && s22[i] != '\0' && res == 0)
	{
		res = s12[i] - s22[i];
		i++;
	}
	if ((s22[i] == '\0' && s12[i] != '\0')
			|| (s22[i] != '\0' && s12[i] == '\0'))
		res = s12[i] - s22[i];
	return (res);
}
