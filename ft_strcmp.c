/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:33:35 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:54:00 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && res == 0)
	{
		res = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if ((s2[i] == '\0' && s1[i] != '\0')
		|| (s2[i] != '\0' && s1[i] == '\0'))
		res = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (res);
}
