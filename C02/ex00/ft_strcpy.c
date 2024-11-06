/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:00:49 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/09/24 14:59:46 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
			dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = {"wehfwehfiuwefoiwejfoijweiofjweoijfowe"};
	char dest[] = {"test"};
	printf("%s\n", ft_strcpy(dest, src));

}
*/
