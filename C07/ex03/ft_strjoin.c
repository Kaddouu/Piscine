/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:16:21 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/10/09 04:39:55 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

int	ft_full_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i < size - 1)
			length += ft_strlen(sep);
		i++;
	}
	return (length);
}

char	*ft_copy(int size, char **strs, char *sep, char *res)
{
	int		i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(res, strs[i]);
		res += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(res, sep);
			res += ft_strlen(sep);
		}
		i++;
	}
	*res = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*res;

	if (size == 0)
	{
		res = malloc(sizeof(char) * 1);
		res[0] = '\0';
		return (res);
	}
	len = ft_full_length(size, strs, sep);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	ft_copy(size, strs, sep, res);
	return (res);
}

/*int	main()
{
	char *strs[] = {"fwef", "wefwe", "fewfwe", "fwef"};
	int	size;

	size = ft_strlen(*strs);
	printf("%s\n",  ft_strjoin(size, strs, "__|__"));
}*/
