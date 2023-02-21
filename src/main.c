/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:23:24 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/21 14:10:20 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int main(int ac, char **av)
{
	t_ps	ps;
	int		i;

	i = 2;
	if (ac < 2)
		return(ft_printf("Error\nToo few arguments\n"), 0);
	init_structure(&ps);
	ps.arg = ft_strdup(av[1]);
	if (!ps.arg)
		return (-1);
	while (i < ac)
	{
		ps.arg = ft_strjoin(ps.arg, " ");
		if (!ps.arg)
			return (free(ps.arg), -1);
		ps.arg = ft_strjoin(ps.arg, av[i]);
		if (!ps.arg)
			return (free(ps.arg), -1);
		i++;
	}
	ft_printf("%s\n", ps.arg);
	free(ps.arg);
	return(0);
}