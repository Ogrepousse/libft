/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:55:14 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:53:35 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	b;

	b = 0;
	i = 0;
	while (b == 0 && s[i] != '\0')
	{
		if (s[i] == c)
			b = 1;
		i++;
	}
	if (b != 0)
		return ((char*)&s[i - 1]);
	else if (c == '\0')
	{
		return ((char*)&s[i]);
	}
	else
		return (NULL);
}
