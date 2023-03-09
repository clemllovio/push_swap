/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:23:24 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/09 15:21:10 by cllovio          ###   ########.fr       */
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

static int	create_str_arg(char **av, int ac, t_parsing *parsing)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (i == 1)
		{
			parsing->arg = ft_strdup(av[i]);
			if (!(parsing->arg))
				return (-1);
		}
		else
		{
			parsing->arg = ft_strjoin(parsing->arg, " ");
			if (!(parsing->arg))
				return (-1);
			parsing->arg = ft_strjoin(parsing->arg, av[i]);
			if (!(parsing->arg))
				return (-1);
		}
		i++;
	}
	return (0);
}

static int	is_sorted(t_list **a)
{
	t_list	*copy;

	copy = (*a);
	while (copy && copy->next)
	{
		if (copy->index > copy->next->index)
			return (-1);
		copy = copy->next;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_parsing	parsing;
	t_list		*a;
	t_list		*b;

	b = NULL;
	if (ac < 2)
		return (-1);
	init_structure(&parsing);
	if (create_str_arg(av, ac, &parsing) == -1)
		return (-1);
	ft_printf("%s\n", parsing.arg);
	if (check_error(&parsing) == -1)
		return (ft_putstr_fd("Error\n", 2), -1);
	a = create_list(&parsing);
	if (a == NULL)
		return (free(parsing.tab_int), -1);
	if (is_sorted(&a) != 0)
		sort_list(&a, &b, &parsing);
	ft_lstclear(a);
	ft_lstclear(b);
	return (0);
}
