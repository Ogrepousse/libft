/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:43:52 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:49:01 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s12;
	char	*s22;

	s12 = (char*)s1;
	s22 = ft_strdup((char*)s2);
	i = 0;
	while (i < n)
	{
		s12[i] = s22[i];
		i++;
	}
	if (s22 != NULL)
		free(s22);
	return (s1);
}
