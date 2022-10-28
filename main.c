#include "./includes/minishell.h"

int	main(int argc, char **argv, char **envp)
{
	char	*line;

	(void)argc;
	(void)argv;
	init(envp, &g_info);
	while (1)
	{
		if (accept_signals())
			exit (-1);
		line = readline("minishell: ");
		if (line == NULL)
			exit(0);
		if (*line == '\0')
			continue ;
		add_history(line);
		lexer(&g_info, line);
		executor(&g_info);
	}
}
