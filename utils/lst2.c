#include "../includes/minishell.h"

t_list	*ft_create_help(t_list *token, int p_i)
{
	t_help	*help;
	int		counter;

	counter = count_cmds(token, p_i);
	help = malloc(sizeof(t_help));
	if (!help)
		return (NULL);
	help->argv = (char **) malloc (sizeof(char *) * (counter));
	if (!help->argv)
		return (NULL);
	help->argv[counter - 1] = NULL;
	help->fd = 0;
	help->pipe = 0;
	help->redir_in = NULL;
	help->redir_out = NULL;
	help->heredok = NULL;
	fill_argv(help, token, p_i);
	return (ft_lstnew(help));
}
