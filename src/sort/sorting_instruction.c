/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:04:50 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/03 15:48:35 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

void	push_a(t_list **a, t_list **b)
{
	push(b, a);
	ft_printf("pa\n");
}

void	push_b(t_list **a, t_list **b)
{
	push(a, b);
	ft_printf("pb\n");
}

void	push(t_list **from, t_list **to)
{
	t_list	*temp;

	temp = (*from);
	(*from) = (*from)->next;
	temp->next = (*to);
	(*to) = temp;
}

void	rotate(t_list **lst, char *instruction)
{
	t_list	*temp;
	t_list	*last;

	temp = (*lst);
	(*lst) = (*lst)->next;
	last = ft_lstlast(*lst);
	temp->next = NULL;
	last->next = temp;
	ft_printf("%s\n", instruction);
}

void	swap(t_list **lst, char	*instruction)
{
	t_list	*temp;

	temp = (*lst)->next;
	(*lst)->next = (*lst)->next->next;
	temp->next = (*lst);
	(*lst) = temp;
	ft_printf("%s\n", instruction);
	print_list(temp);
}