/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:31:09 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/03 15:42:35 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

void	sort_two(t_list **a)
{
	if ((*a)->index > (*a)->next->index)
		swap(a, "sa");
}

void	sort_list(t_list *a, t_list *b, t_parsing	*parsing)
{
	if (parsing->nbr_line_tab == 2)
		sort_two(&a);
	else if ( parsing->nbr_line_tab >  5)
		swap(&a, "sa");
	else
		radix(a, b, parsing);
}
