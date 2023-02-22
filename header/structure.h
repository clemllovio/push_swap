/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:15:28 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/22 15:05:59 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
#define STUCTURE_H

typedef struct s_ps {
	char	*arg;
	char	**tab;
	long int		*tab_int;
	int		nbr_line_tab;
}	t_ps;

#endif
