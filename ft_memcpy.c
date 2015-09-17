/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:43:52 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:47:29 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s12;
	char	*s22;

	s12 = (char *)s1;
	s22 = (char *)s2;
	i = 0;
	while (i < n)
	{
		s12[i] = s22[i];
		i++;
	}
	return (s1);
}
