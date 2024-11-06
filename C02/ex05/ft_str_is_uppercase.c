/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:07:57 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/24 19:21:44 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	r;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		r = str[i];
		if (r >= 'A' && r <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
    printf("%d\n", ft_str_is_uppercase(""));
    printf("%d\n", ft_str_is_uppercase("QjhjSQJ"));
    printf("%d\n", ft_str_is_uppercase("AHGD"));
}
*/
