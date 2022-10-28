#include "../includes/minishell.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	str = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	str[ft_strlen(s)] = '\0';
	i = 0;
	while (s && s[i])
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
