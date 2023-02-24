/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:00:48 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/24 15:40:47 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

t_list	*create_list(t_parsing *parsing)
{
	t_list	*a;
	int		i;

	i = 1;
	a = ft_lstnew(parsing->tab_int[0], 0);
	while (i < parsing->nbr_line_tab)
	{
		ft_lstadd_back(a, parsing->tab_int[i], i);
		i++;
	}
	free(parsing->tab_int);
	return (a);
}
