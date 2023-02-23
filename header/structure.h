/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:15:28 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/23 15:06:09 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
#define STRUCTURE_H

typedef struct s_list {
	int				content;
	struct s_list	*next;
	int				index;
}	t_list;

typedef struct s_parsing {
	char			*arg;
	char			**tab;
	long int		*tab_int;
	int				nbr_line_tab;
	int				nbr_minus;
}	t_parsing;

#endif
