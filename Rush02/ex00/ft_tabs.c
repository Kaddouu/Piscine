/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:08:21 by kyang             #+#    #+#             */
/*   Updated: 2024/10/06 20:32:46 by kyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	**ft_allo(char *s, int k)
{
	int		l;
	char	**t;

	l = ft_strlen(s);
	t = malloc((k) * sizeof(char *));
	if (!t)
		return (0);
	t[0] = malloc(((l % 3) + 1) * sizeof(char));
	if (!t[0])
		return (0);
	while (k > 1)
	{
		t[k - 1] = malloc(4 * sizeof(char));
		if (!t[k - 1])
			return (0);
		k--;
	}
	return (t);
}

char	**ft_put_rest(char **t, char *s, int i, int m)
{
	int	j;
	int	l;
	int	k;

	l = ft_strlen(s);
	if (l % 3 != 0)
		k = (l / 3) + 1;
	else
		k = l / 3;
	while (i < k)
	{
		j = 0;
		while (j < 3)
		{
			t[i][j] = s[m];
			j++;
			m++;
		}
		t[i][j] = '\0';
		i++;
	}
	return (t);
}

char	**ft_put(char **t, char *s, int l)
{
	int	i;
	int	m;
	int	j;

	i = 0;
	m = 0;
	if (l % 3 != 0)
	{
		j = 0;
		while (l % 3 > 0)
		{
			t[i][j] = s[m];
			j++;
			l--;
			m++;
		}
		t[i][j] = '\0';
		i++;
	
	}
	t = ft_put_rest(t, s, i, m);
	return (t);
}

int	count_initial_tab(char *s)
{
	int		i;
	int		l;
	int		k;

	l = ft_strlen(s);
	i = 0;
	if (l % 3 != 0)
		k = (l / 3) + 1;
	else
		k = l / 3;
	return (k);
}


char	**str_to_tabs(char *s)
{
	int		i;
	int		l;
	int		k;
	char	**t;

	l = ft_strlen(s);
	i = 0;
	if (l % 3 != 0)
		k = (l / 3) + 1;
	else
		k = l / 3;
	t = ft_allo(s, k);
	t = ft_put(t, s, l);
	return (t);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void) ac;
	int	i;
	char	**s;
	int	l;
	int	k;

	i = 0;
	s = str_to_tabs(av[1]);
	l = ft_strlen(av[1]);
	if (l % 3 != 0)
		k = (l / 3) + 1;
	else 
		k = l / 3;
	while (k > 0)
	{
		printf("%s\n", s[i]);
		i++;
		k--;
	}
}*/
