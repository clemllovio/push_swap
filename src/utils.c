/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:21:34 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/22 11:04:36 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	init_structure(t_ps *ps)
{
	ps->arg = NULL;
	ps->tab = NULL;
	ps->nbr_line_tab = 0;
	ps->tab_int = 0;
}