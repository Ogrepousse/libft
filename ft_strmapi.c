/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:24:23 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:57:09 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	p = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i] != '\0' && p != NULL)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
