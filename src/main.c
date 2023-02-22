/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:23:24 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/22 13:39:27 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int main(int ac, char **av)
{
	t_ps	ps;
	int		i;

	i = 2;
	if (ac < 2)
		return(-1);
	init_structure(&ps);
	ps.arg = ft_strdup(av[1]);
	if (!ps.arg)
		return (-1);
	while (i < ac)
	{
		ps.arg = ft_strjoin(ps.arg, " ");
		if (ps.arg == NULL)
			return (-1);
		ps.arg = ft_strjoin(ps.arg, av[i]);
		if (!ps.arg)
			return (-1);
		i++;
	}
	if (check_error(&ps) == -1)
		return (ft_putstr_fd("Error\n", 2), free(ps.arg), -1);
	ft_free(ps.tab, ps.nbr_line_tab);
	return(0);
}