/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:49:38 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/22 18:26:02 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	check_error(t_ps *ps)
{
	if (is_valid(ps) == -1)
		return (-1);
	if (convert_int(ps) == -1)
		return (-1);
	if (check_dupe(ps) == -1)
		return	(-1);
	return (0);	
}

int	is_valid(t_ps *ps)
{
	int i;
	
	i = 0;
	while (ps->arg[i])
	{
		if ((ps->arg[i] >= '0' && ps->arg[i] <= '9') ||  ps->arg[i] == ' ')
			i++;
		else if (ps->arg[i] == '-' && (ps->arg[i + 1] >= '0' && \
		ps->arg[i + 1] <= '9'))
			i++;
		else
			return (-1);		
	}
	return (0);
}

int		convert_int(t_ps *ps)
{
	int i;

	ps->tab = ft_split(ps->arg, ' ');
	if (!(ps->tab))
		return (-1);
	while(ps->tab[ps->nbr_line_tab])
		ps->nbr_line_tab++;
	i = 0;
	ps->tab_int = malloc(sizeof(int) * ps->nbr_line_tab);
	if (!(ps->tab_int))
		return (-1);
	while (i < ps->nbr_line_tab)
	{
		ps->tab_int[i] = ft_atol(ps->tab[i]);
		if (ps->tab_int[i] == 2147483648)
			return (-1);
		i++;	
	}
	return (0);
}

int	check_dupe(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->nbr_line_tab)
	{
		j = 0;
		while (j < ps->nbr_line_tab)
		{
			if (i == j)
				j++;
			else if (ps->tab_int[i] == ps->tab_int[j])
				return (-1);
			else
				j++;
		}
		i++;
	}
	return (0);
}