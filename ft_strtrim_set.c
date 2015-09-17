/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim_set.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:05:29 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 13:02:11 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_top(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	return (i);
}

static int	count_back(char const *s, char c)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i >= 0 && s[i] == c)
		i--;
	return (ft_strlen(s) - i - 1);
}

char		*ft_strtrim_set(char const *s, char c)
{
	int		l;
	int		i;
	int		j;
	char	*p;

	j = count_back(s, c);
	i = count_top(s, c);
	l = ft_strlen(s);
	if (l - i - j <= 0)
		return (NULL);
	p = ft_strnew(l - i - j);
	if (i == l)
		return (NULL);
	ft_memmove(p, s + i, l - i - j);
	return (p);
}
