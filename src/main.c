/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:23:24 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/23 15:05:41 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	main(int ac, char **av)
{
	t_parsing	parsing;
	int			i;

	i = 2;
	if (ac < 2)
		return (-1);
	init_structure(&parsing);
	parsing.arg = ft_strdup(av[1]);
	if (!(parsing.arg))
		return (-1);
	while (i < ac)
	{
		parsing.arg = ft_strjoin(parsing.arg, " ");
		if (!(parsing.arg))
			return (-1);
		parsing.arg = ft_strjoin(parsing.arg, av[i]);
		if (!(parsing.arg))
			return (-1);
		i++;
	}
	if (check_error(&parsing) == -1)
		return (ft_putstr_fd("Error\n", 2), -1);
	ft_free(parsing.tab, parsing.nbr_line_tab);
	return (0);
}
