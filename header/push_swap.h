/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:42 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/24 15:14:26 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ---- LIBRAIRIE ---- */
# include "../libft/libft.h"
# include "structure.h"

/* ---- utils.c ----*/
void	init_structure(t_parsing *parsing);

/* ---- parsing.c ----*/
int		check_error(t_parsing *parsing);
int		is_valid(t_parsing *parsing);
int		check_minus(t_parsing *parsing);
int		check_dupe(t_parsing *parsing);

/* ---- LIST ---- */

/*	ft_lstadd_back.c	*/
void	ft_lstadd_back(t_list *a, int content, int index);

/*	ft_lstadd_front.c	*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/*	ft_lstclear.c	*/
void	ft_lstclear(t_list *lst);

/*	ft_lstdelone.c	*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/*	ft_lstlast.c	*/
t_list	*ft_lstlast(t_list *lst);

/*	ft_lstnew.c	*/
t_list	*ft_lstnew(int	content, int index);

/*	ft_lstsize.c	*/
int	ft_lstsize(t_list *lst);

/*	create_lst.c	*/
t_list	*create_list(t_parsing *parsing);

void	print_list(t_list	*a);

#endif