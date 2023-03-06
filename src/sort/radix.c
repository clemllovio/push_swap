/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:57:04 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/06 09:48:18 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

int	get_max(t_list *a)
{
	int	max;

	max = a->content;
	while (a)
	{
		if (max < a->content)
			max = a->content;
		a = a->next;
	}
	return (max);
}

void	add_zero(int max)
{
	int	i;

	i = 0;
	while (max > 0)
	{
		max = max / 10;
		if (i == 0)
			i++;
		else
			i = i * 10;
	}
	ft_printf("nbr unite : %d\n", i);
}

void	counting_sort(t_list **a, t_parsing	*parsing)
{
	int	max;
	int	*count;
	int	i;

	i = 0;
	max = get_max(*a);
	ft_printf("max : %d\n", max);
	add_zero(max);
	count = malloc(sizeof(int) * parsing->nbr_line_tab);
	if (!(count))
		return ;
	while (i < parsing->nbr_line_tab)
	{
		count[i] = 0;
		i++;
	}
}

// void	radix(t_list *a, t_list *b, t_parsing *parsing)
// {
// 	counting_sort(&a, parsing);
// }
