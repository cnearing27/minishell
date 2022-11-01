/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnearing <cnearing@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:33:06 by cnearing          #+#    #+#             */
/*   Updated: 2022/10/31 20:24:58 by cnearing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_exit(char **args)
{
	ft_putstr_fd("exit\n", 1);
	if (args[1] != NULL)
	{
		g_info.status = 1;
		ft_putstr_fd("minishell: exit: too many arguments\n", 2);
		return ;
	}
	else if (args[0] && (args[0][0] < 48 || args[0][0] > 57))
	{
		ft_putstr_fd("minishell: exit: ", 2);
		ft_putstr_fd(args[0], 2);
		ft_putstr_fd(": numeric argument required\n", 2);
		g_info.status = 255;
	}
	else if (args[0] != NULL)
		g_info.status = ft_atoi(args[0]);
	rl_clear_history();
	free_strs(g_info.env);
	exit(g_info.status);
}
