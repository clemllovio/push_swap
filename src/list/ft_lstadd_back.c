/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:38:19 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/01 09:54:39 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

void	ft_lstadd_back(t_list *a, int content)
{
	t_list	*last;
	t_list	*new;

	new = ft_lstnew(content);
	if (new)
	{
		if (!(a))
		{
			a = new;
			return ;
		}
		last = ft_lstlast(a);
		last->next = new;
	}
}
