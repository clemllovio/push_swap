/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 09:31:09 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/08 16:22:16 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

void	sort_two(t_list **a)
{
	if ((*a)->index > (*a)->next->index)
		swap(a, "sa");
}

void	sort_three(t_list **lst)
{
	int	a;
	int	b;
	int	c;

	a = (*lst)->index;
	b = (*lst)->next->index;
	c = (*lst)->next->next->index;
	if (a < b && b > c && a < c)
	{
		reverse_rotate(lst, "rra");
		swap(lst, "sa");
	}
	else if (a > b && b < c && a < c)
		swap(lst, "sa");
	else if (a < b && b > c && a > c)
		reverse_rotate(lst, "rra");
	else if (a > b && b < c && a > c)
		rotate(lst, "ra");
	else if (a > b && b > c && a > c)
	{
		swap(lst, "sa");
		reverse_rotate(lst, "rra");
	}
}

void	sort_four(t_list **a, t_list **b)
{
	push_b(a, b);
	sort_three(a);
	push_a(a, b);
	if ((*a)->index == 1)
		swap(a, "sa");
	else if ((*a)->index == 2)
	{
		swap(a, "sa");
		rotate(a, "ra");
		swap(a, "sa");
		reverse_rotate(a, "rra");
	}
	else if ((*a)->index == 3)
		rotate(a, "ra");
}

void	sort_five(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i != 2)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
		{
			push_b(a, b);
			i++;
		}
		else
			rotate(a, "ra");
	}
	sort_three(a);
	if ((*b)->index < (*b)->next->index)
		swap(b, "sb");
	push_a(a, b);
	push_a(a, b);
}

void	sort_list(t_list **a, t_list **b, t_parsing	*parsing)
{
	if (parsing->nbr_line_tab == 2)
		sort_two(a);
	else if (parsing->nbr_line_tab == 3)
		sort_three(a);
	else if (parsing->nbr_line_tab == 4)
		sort_four(a, b);
	else if (parsing->nbr_line_tab == 5)
		sort_five(a, b);
	else if (parsing->nbr_line_tab > 5)
		radix(a, b);
}
