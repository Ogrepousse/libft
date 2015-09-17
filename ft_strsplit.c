/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esusseli <esusseli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:05:29 by esusseli          #+#    #+#             */
/*   Updated: 2015/09/17 13:00:31 by esusseli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_word(char *s, char c)
{
	int	i;
	int	res;
	int	b;

	b = 0;
	res = 1;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (b == 0 && s[i] == c)
		{
			b = 1;
		}
		if (b == 1 && s[i] != c)
		{
			b = 0;
			res++;
		}
		i++;
	}
	return (res);
}

void		make_tab(char *p, char c, char **tab, int nb)
{
	int		i;
	int		j;
	int		b;

	i = 0;
	while (i < nb)
	{
		j = 0;
		b = 0;
		while (b >= 0)
		{
			if (p[j] != c)
				b++;
			else if ((p[j] == '\0' || p[j] == c) && b != 0)
			{
				tab[i] = (char*)malloc(sizeof(char) * (b + 1));
				tab[i][b] = '\0';
				b = -1;
			}
			j++;
		}
		i++;
	}
	tab[i] = NULL;
}

void		fill_tab(char *p, char c, char **tab, int nb)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < nb)
	{
		j = 0;
		while (p[k] != c && p[k] != '\0')
		{
			tab[i][j] = p[k];
			j++;
			k++;
		}
		while (p[k] == c)
			k++;
		i++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*p;
	int		nb;

	if (s == NULL)
		return (NULL);
	p = ft_strtrim_set(s, c);
	nb = nb_word(p, c);
	tab = (char**)malloc(sizeof(char*) * (nb + 1));
	make_tab(p, c, tab, nb);
	fill_tab(p, c, tab, nb);
	return (tab);
}
