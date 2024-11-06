/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numeral_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:33:29 by kyang             #+#    #+#             */
/*   Updated: 2024/10/06 18:58:10 by kyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s);
int	ft_atoi(char *str);

int	get_spaces(char *s)
{
	int	nb;

	nb = atoi(s);
	if (nb <= 20 || (nb < 100 && nb % 10 == 0))
		return (1);
	else if (nb < 100 && nb % 10 != 0)
		return (2);
	else if (nb >= 100 && nb % 100 == 0)
		return (2);
	else
		return (4);
}

int	*put_key(int *result, int nb)
{
	if (nb <= 20 || (nb < 100 && nb % 10 == 0))
		result[0] = nb;
	else if (nb < 100 && nb % 10 != 0)
	{
		result[0] = (nb / 10) * 10;
		result[1] = nb % 10;
	}
	else if (nb > 100 && nb % 100 == 0)
	{
		result[0] = nb / 100;
		result[1] = 100;
	}
	else
	{
		result[0] = nb / 100;
		result[1] = 100;
		result[2] = ((nb / 10) * 10) % 100;
		result[3] = nb % 10;
	}
	return (result);
}


int	*get_numeral_key(char *array)
{
	int	nb;
	int	*result;

	result = (int *)malloc(get_spaces(array) * sizeof(int));
	if (!result)
		return (0);
	nb = ft_atoi(array);
/*	if (nb <= 20 || (nb < 100 && nb % 10 == 0))
		result[0] = nb;
	else if (nb < 100 && nb % 10 != 0)
	{
		result[0] = (nb / 10) * 10;
		result[1] = nb % 10;
	}
	else if (nb > 100 && nb % 100 == 0)
	{
		result[0] = nb / 100;
		result[1] = 100;
	}
	else
	{
		result[0] = nb / 100;
		result[1] = 100;
		result[2] = ((nb / 10) * 10) % 100;
		result[3] = nb % 10;
	}
	return (result);*/
	return (put_key(result, nb));
}

char	*ft_itoa(int nb)
{
	int		i;
	int		l;
	int		n;
	char	*s;

	i = 0;
	l = 1;
	n = nb;
	while (n / 10 > 0)
	{
		n /= 10;
		l++;
	}
	s = malloc((l + 1) * sizeof(char));
	if (!s)
		return (0);
	if (l == 1)
		s[l - 1] = (nb % 10) + '0';
	while (i < l)
	{
		s[l - 1 - i++] = (nb % 10) + '0';
		nb = (nb - (nb % 10)) / 10;
	}
	s[l] = '\0';
	return (s);
}

char	**int2char(int *t, char *c)
{
	int		i;
	int		l;
	int		m;
	char	**s;

	i = 0;
	l = get_spaces(c);
	s = malloc(l * sizeof(char *));
	if (!s)
		return (0);
	while (i < l)
	{
		m = ft_strlen(ft_itoa(t[i]));
		s[i] = malloc((m + 1) * sizeof(char));
		if (!s[i])
			return (0);
		s[i][m] = '\0';
		while (m >= 0)
		{
			s[i][m - 1] = ft_itoa(t[i])[m - 1];
			m--;
		}
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char **s;
	int 	i = 0;
	int	t[4] = {1, 100, 0, 4};
	char	*c = "104";
	s = int2char(t, c);
	while (s[i])
	{
		printf("%s\n",s[i]);
		i++;
	}
	return (0);
}*/
