/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:00:48 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/09 14:01:51 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

static void	get_index(t_list *a, t_parsing *parsing)
{
	int	i;

	while (a)
	{
		i = 0;
		while (i < parsing->nbr_line_tab)
		{
			if (a->content > parsing->tab_int[i])
				a->index++;
			i++;
		}
		a = a->next;
	}
	free(parsing->tab_int);
}

t_list	*create_list(t_parsing *parsing)
{
	t_list	*a;
	int		i;

	i = 1;
	a = ft_lstnew(parsing->tab_int[0]);
	if (a == NULL)
		return (NULL);
	while (i < parsing->nbr_line_tab)
	{
		if (ft_lstadd_back(a, parsing->tab_int[i]) == -1)
			return (NULL);
		i++;
	}
	get_index(a, parsing);
	return (a);
}
