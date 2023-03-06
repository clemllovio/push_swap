/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:31:09 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/06 13:19:10 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

void	sort_two(t_list **a)
{
	if ((*a)->index > (*a)->next->index)
		swap(a, "sa");
}

void	sort_three(t_list **a)
{
	while (((*a)->index > (*a)->next->next->index) || \
	((*a)->index > (*a)->next->index) || \
	((*a)->next->index > (*a)->next->next->index))
	{
		if ((*a)->index > (*a)->next->index)
			swap(a, "sa");
		else if ((*a)->next->index > (*a)->next->next->index)
		{
			rotate(a, "ra");
			rotate(a, "ra");
		}
	}

}

void	sort_list(t_list **a, t_parsing	*parsing)
{
	if (parsing->nbr_line_tab == 2)
		sort_two(a);
	else if (parsing->nbr_line_tab == 3)
		sort_three(a);
}
