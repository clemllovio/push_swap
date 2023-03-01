/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:36:12 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/01 09:52:49 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!(cell))
		return (NULL);
	cell->content = content;
	cell->index = 0;
	cell->next = NULL;
	return (cell);
}
