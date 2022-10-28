#include "../includes/minishell.h"

void	ft_echo(char **args)
{
	int	i;
	int	f_n;

	i = 0;
	f_n = 0;
	if (args[i] && !ft_strncmp(args[i], "-n", 2))
	{
		f_n = 1;
		i++;
	}
	while (args[i])
	{
		ft_putstr_fd(args[i], 1);
		i++;
		if (args[i])
			ft_putstr_fd(" ", 1);
	}
	if (!f_n)
		ft_putstr_fd("\n", 1);
	g_info.status = 0;
}
