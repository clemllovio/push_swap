/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:57:04 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/09 11:10:55 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

static int	get_max(t_list **a)
{
	int		max;
	t_list	*temp;

	temp = (*a);
	max = temp->index;
	while (temp)
	{
		if (max < temp->index)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}

static int	nbr_shift_max(int max)
{
	int	i;

	i = 1;
	while (max >> i)
		i++;
	return (i);
}

void	radix(t_list **a, t_list **b)
{
	int	max;
	int	nbr_shift;
	int	current_shift;
	int	i;

	max = get_max(a);
	nbr_shift = nbr_shift_max(max);
	current_shift = 0;
	while (current_shift < nbr_shift)
	{
		i = 0;
		while (i <= max)
		{
			if (((*a)->index >> current_shift) % 2 == 0)
				push(a, b, "pb");
			else
				rotate(a, "ra");
			i++;
		}
		while ((*b))
			push(b, a, "pa");
		current_shift++;
	}
}
