#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_sep(char	c, char	*charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{	
		if (c == charset[i])
			return (1);
	i++;
	}
	return (0);
}

int	count_words (char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i])
	{	
		if (check_sep(str[i], charset) == 1)
			if (check_sep(str[i + 1], charset) == 0 || str[i + 1] == '\0')
				count ++;
	i++;
	}
	return (count);
}

/*char **ft_split(char *str, char *charset)
{

}*/

int main ()
{
	printf("%d", count_words("je,m'appelle/ilias", ",/"));
}
