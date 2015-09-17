/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:24:30 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 12:43:03 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	val_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	count_len(int n)
{
	int l;

	if (n == 0)
		return (1);
	l = 0;
	if (n < 0)
		l++;
	while (n != 0)
	{
		l++;
		n = val_abs(n / 10);
	}
	return (l);
}

char		*ft_itoa(int n)
{
	char	*p;
	int		i;
	int		b;

	b = 0;
	i = count_len(n);
	p = (char*)malloc(sizeof(char) * (i + 1));
	p[i--] = '\0';
	if (n < 0)
		b = 1;
	while (i >= 0)
	{
		p[i] = '0' + val_abs(n % 10);
		n = val_abs(n / 10);
		i--;
	}
	if (b == 1)
		p[0] = '-';
	return (p);
}
