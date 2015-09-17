/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:06:23 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 13:01:12 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	b;
	int	i;
	int	j;

	b = 0;
	i = 0;
	if (s2[0] == '\0' || s2 == NULL)
	{
		return ((char*)s1);
	}
	while (s1[i] != '\0' && b == 0)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j] != '\0' && s2[j] != '\0')
			j++;
		if (s2[j] == '\0' && j != 0)
			b = 1;
		i++;
	}
	if (b == 1)
		return ((char*)&s1[i - 1]);
	else
		return (NULL);
}
