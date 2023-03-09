/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_instruction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:04:50 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/09 09:50:04 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

void	push(t_list **from, t_list **to, char *instruction)
{
	t_list	*temp;

	temp = (*from);
	(*from) = (*from)->next;
	temp->next = (*to);
	(*to) = temp;
	ft_printf("%s\n", instruction);
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

void	reverse_rotate(t_list	**lst, char *instruction)
{
	t_list	*temp;
	t_list	*last;

	temp = (*lst);
	while (temp->next->next)
		temp = temp->next;
	last = temp->next;
	temp->next = NULL;
	last->next = *lst;
	*lst = last;
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
}
