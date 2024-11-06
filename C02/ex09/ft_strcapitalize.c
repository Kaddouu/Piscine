/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:04:51 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/30 15:12:31 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
	i++;
	}
	return (0);
}

int	firstchar(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

int	alphanum(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	strlowcase(str);
	if (firstchar(str[0]) == 0)
		str[0] -= 32;
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (alphanum(str[i]) == 1 && (str[j] >= 'a' && str[j] <= 'z'))
			str[j] = str[j] - 32;
		i++;
		j++;
	}
	return (str);
}
/*
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}*/
