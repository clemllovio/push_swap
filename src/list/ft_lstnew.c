/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:36:12 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/24 15:41:17 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*cell;

	cell = malloc(sizeof(t_list));
	if (!(cell))
		return (NULL);
	cell->content = content;
	cell->index = index;
	cell->next = NULL;
	return (cell);
}
