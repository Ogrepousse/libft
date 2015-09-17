/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:07:11 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:39:18 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		s;
	char	*p;

	if ((p = ft_strtrim_bis(str)) == NULL)
		return (0);
	res = 0;
	i = 0;
	s = 1;
	if (p[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (p[i] == '+')
		i++;
	else if ((p[i] < '0' || p[i] > '9'))
		s = 0;
	while (p[i] >= '0' && p[i] <= '9' && s != 0)
	{
		res = res * 10 + p[i] - '0';
		i++;
	}
	return (res * s);
}
