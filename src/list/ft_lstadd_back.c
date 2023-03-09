/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:38:19 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/09 13:59:31 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

int	ft_lstadd_back(t_list *a, int content)
{
	t_list	*last;
	t_list	*new;

	new = ft_lstnew(content);
	if (!(new))
		return (-1);
	if (new)
	{
		last = ft_lstlast(a);
		last->next = new;
	}
	return (0);
}
