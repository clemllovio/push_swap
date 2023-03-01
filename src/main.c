/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:23:24 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/01 15:09:42 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	init_structure(t_parsing *parsing)
{
	parsing->arg = NULL;
	parsing->tab = NULL;
	parsing->tab_int = NULL;
	parsing->nbr_line_tab = 0;
	parsing->nbr_minus = 0;
}

static int	create_str_arg(int i, char *str, t_parsing *parsing)
{
	if (i == 1)
	{
		parsing->arg = ft_strdup(str);
		if (!(parsing->arg))
			return (-1);
	}
	else
	{
		parsing->arg = ft_strjoin(parsing->arg, " ");
		if (!(parsing->arg))
			return (-1);
		parsing->arg = ft_strjoin(parsing->arg, str);
		if (!(parsing->arg))
			return (-1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_parsing	parsing;
	t_list		*a;
	int			i;

	i = 1;
	if (ac < 2)
		return (-1);
	init_structure(&parsing);
	while (i < ac)
	{
		if (create_str_arg(i, av[i], &parsing) == -1)
			return (-1);
		i++;
	}
	if (check_error(&parsing) == -1)
		return (ft_putstr_fd("Error\n", 2), -1);
	a = create_list(&parsing);
	radix(a, &parsing);
	print_list(a);
	ft_lstclear(a);
	return (0);
}
