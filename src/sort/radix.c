/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:57:04 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/08 16:11:30 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

int	get_max(t_list **a)
{
	int	max;
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

int	add_zero(int max)
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
	int	shift;
	int	i;

	max = get_max(a);
	nbr_shift = add_zero(max);
	shift = 0;
	while (shift < nbr_shift)
	{
		i = 0;
		while (i <= max)
		{
			if (((*a)->index >> shift) % 2 == 0)
				push_b(a, b);
			else
				rotate(a, "ra");
			i++;
		}
		while ((*b))
			push_a(a, b);
		shift++;
	}
}
