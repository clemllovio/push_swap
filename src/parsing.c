/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:49:38 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/28 10:41:26 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	check_error(t_parsing *parsing)
{
	if (is_valid(parsing) == -1)
	{
		free(parsing->arg);
		return (-1);
	}
	else if (check_minus(parsing) == -1)
	{
		free(parsing->arg);
		return (-1);
	}
	else if (create_tab_int(parsing) == -1)
	{
		free(parsing->arg);
		ft_free(parsing->tab, parsing->nbr_line_tab);
		return (-1);
	}
	free(parsing->arg);
	ft_free(parsing->tab, parsing->nbr_line_tab);
	return (0);
}

int	is_valid(t_parsing *parsing)
{
	int	i;

	i = 0;
	while (parsing->arg[i])
	{
		if ((parsing->arg[i] >= '0' && parsing->arg[i] <= '9') || \
		parsing->arg[i] == ' ')
			i++;
		else if (parsing->arg[i] == '-' && (parsing->arg[i + 1] >= '0' \
		&& parsing->arg[i + 1] <= '9'))
		{
			i++;
			parsing->nbr_minus++;
		}
		else
			return (-1);
	}
	return (0);
}

int	check_minus(t_parsing *parsing)
{
	int	i;

	parsing->tab = ft_split(parsing->arg, ' ');
	if (!(parsing->tab))
		return (-1);
	while (parsing->tab[parsing->nbr_line_tab])
		parsing->nbr_line_tab++;
	i = 0;
	while (i < parsing->nbr_line_tab)
	{
		if (parsing->tab[i][0] == '-')
			parsing->nbr_minus--;
		i++;
	}
	if (parsing->nbr_minus > 0)
		return (ft_free(parsing->tab, parsing->nbr_line_tab), -1);
	return (0);
}

int	create_tab_int(t_parsing *parsing)
{	
	int	i;

	i = 0;
	parsing->tab_int = malloc(sizeof(int) * parsing->nbr_line_tab);
	if (!(parsing->tab_int))
		return (-1);
	while (i < parsing->nbr_line_tab)
	{
		parsing->tab_int[i] = ft_atol(parsing->tab[i]);
		if (parsing->tab_int[i] == 2147483648)
			return (free(parsing->tab_int), -1);
		i++;
	}
	if (check_dupe(parsing) == -1)
		return (-1);
	return (0);
}

int	check_dupe(t_parsing *parsing)
{
	int	i;
	int	j;

	i = 0;
	while (i < parsing->nbr_line_tab)
	{
		j = 0;
		while (j < parsing->nbr_line_tab)
		{
			if (i == j)
				j++;
			else if (parsing->tab_int[i] == parsing->tab_int[j])
				return (free(parsing->tab_int), -1);
			else
				j++;
		}
		i++;
	}
	return (0);
}
