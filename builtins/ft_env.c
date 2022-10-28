#include "../includes/minishell.h"

void	ft_env(char **args)
{
	int	i;

	if (args[0])
	{
		ft_putstr_fd("env: ", 2);
		ft_putstr_fd(args[0], 2);
		ft_putstr_fd(": No such file or directory\n", 2);
		return ;
	}
	i = 0;
	while (g_info.envp[i])
	{
		if (ft_strchr(g_info.envp[i], '='))
		{
			ft_putstr_fd(g_info.envp[i], 1);
			ft_putstr_fd("\n", 1);
		}
		i++;
	}
	g_info.status = 0;
}
