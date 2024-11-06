/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:09:44 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/09 02:14:34 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = ((int *)malloc(sizeof(int) * (max - min)));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*int main(int argc, char**argv)
  {
  int i;
//	int	min;
//	int	max;
int *tab;
(void)argc;

i = 0;
//	min = 21;
//	max = 20;
//	ft_range(min, max);
tab = ft_range(atoi(argv[1]), atoi(argv[2]));
while (i < (atoi(argv[2]) - atoi(argv[1])))
{
printf("%d ", tab[i]);
i++;
}
free(ft_range(atoi(argv[1]), atoi(argv[2])));
}*/
