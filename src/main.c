/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:23:24 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/06 13:57:31 by cllovio          ###   ########.fr       */
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
	t_list		*b;
	int			i;

	i = 1;
	b = NULL;
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
	final_print(a, b, &parsing);
	ft_lstclear(a);
	return (0);
}

void	final_print(t_list *a, t_list *b, t_parsing *parsing)
{
	ft_printf("---- BEFORE SORTING ----\n");
	ft_printf("STACK_A : \n");
	print_list(a);
	ft_printf("\nSTACK_B : \n");
	print_list(b);
	ft_printf("\n---- INSTRUCTION ----\n");
	// while (is_sorted(a) != 0)
	// {
	// 	sort_list(&a, parsing);
	// }
	reverse_rotate(&a, parsing, "rra");
	ft_printf("\n---- AFTER SORTING ----\n\n");
	ft_printf("STACK_A : \n");
	print_list(a);
	ft_printf("\nSTACK_B : \n");
	print_list(b);
}

int is_sorted(t_list *a)
{
	t_list	*copy;

	copy = a;
	while (copy && copy->next)
	{
		if (copy->index > copy->next->index)
			return (-1);
		copy = copy->next;
	}
	ft_printf("it's sorted");
	return (0);
}