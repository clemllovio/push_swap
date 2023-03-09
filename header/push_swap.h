/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:42 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/09 13:55:03 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ------------------------ LIBRAIRIE ------------------------ */
# include "../libft/libft.h"
# include "structure.h"

/* ---------- parsing.c -----------*/
int		check_error(t_parsing *parsing);

/* ------------------------ LIST ------------------------------- */
int		ft_lstadd_back(t_list *a, int content);
void	ft_lstclear(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	print_list(t_list	*a);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*create_list(t_parsing *parsing);

/* ------------------------ SORT ------------------------------- */
/*	sort.c	*/
void	sort_list(t_list **a, t_list **b, t_parsing *parsing);

/*	sorting_instruction.c*/
void	push(t_list **from, t_list **to, char *instruction);
void	rotate(t_list **lst, char	*instruction);
void	swap(t_list **lst, char	*instruction);
void	reverse_rotate(t_list	**lst, char *instruction);

/*	radix.c	*/
void	radix(t_list **a, t_list **b);

#endif