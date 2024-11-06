/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:26:07 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/24 19:48:10 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	r;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		r = str[i];
		if (r >= 32 && r <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char	np = 3;
    printf("%d\n", ft_str_is_printable(""));
    printf("%d\n", ft_str_is_printable(&np));
    printf("%d\n", ft_str_is_printable("1355"));
}
*/
