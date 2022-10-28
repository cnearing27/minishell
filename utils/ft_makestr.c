#include "../includes/minishell.h"

char	*ft_makestr(char *str, int i, int j)
{
	int		k;
	char	*new;

	new = malloc (sizeof(char) * (j - i));
	//new = malloc (sizeof(char) * (j - i - 1));
	if (!new)
		return (NULL);
	new[j - i] = '\0';
	k = 0;
	while (i < j)
	{
		new[k] = str[k];
		k++;
		i++;
	}
	return (new);
}
