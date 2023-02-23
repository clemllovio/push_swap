/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:21:34 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/23 15:05:31 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	init_structure(t_parsing *parsing)
{
	parsing->arg = NULL;
	parsing->tab = NULL;
	parsing->nbr_line_tab = 0;
	parsing->nbr_minus = 0;
}
