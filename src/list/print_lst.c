/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:35:47 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/06 14:04:48 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

void	print_list(t_list	*a)
{
	ft_printf(" content  |  index\n");
	ft_printf("-------------------\n");
	while (a)
	{
		ft_printf("   %d     |   %d  \n", a->content, a->index);
		if (a->next != NULL)
			ft_printf("------------------\n");
		a = a->next;
	}
}
