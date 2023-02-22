/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:42 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/22 14:48:47 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ---- LIBRAIRIE ---- */
# include "../libft/libft.h"
# include "structure.h"

/* ---- utils.c ----*/
void	init_structure(t_ps *ps);

/* ---- parsing.c ----*/
int		check_error(t_ps *ps);
int		is_valid(t_ps *ps);
int		convert_int(t_ps *ps);
int		check_dupe(t_ps *ps);
#endif