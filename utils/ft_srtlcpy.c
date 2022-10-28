#include "../includes/minishell.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	if (!size)
		return (ft_strlen(src));
	index = 0;
	while (src[index] && index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	if (size)
		dst[index] = '\0';
	return (ft_strlen(src));
}
