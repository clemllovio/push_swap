/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:42 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/08 16:27:36 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ------------------------ LIBRAIRIE ------------------------ */
# include "../libft/libft.h"
# include "structure.h"

void	final_print(t_list *a, t_list *b, t_parsing *parsing);
int		is_sorted(t_list **a);

/* ---------- parsing.c -----------*/
int		check_error(t_parsing *parsing);
int		is_valid(t_parsing *parsing);
int		check_minus(t_parsing *parsing);
int		check_dupe(t_parsing *parsing);
int		create_tab_int(t_parsing *parsing);

/* ------------------------ LIST ------------------------------- */
/*	ft_lstadd_back.c	*/
void	ft_lstadd_back(t_list *a, int content);

/*	ft_lstadd_front.c	*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/*	ft_lstclear.c	*/
void	ft_lstclear(t_list *lst);

/*	ft_lstdelone.c	*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/*	ft_lstlast.c	*/
t_list	*ft_lstlast(t_list *lst);

/*	ft_lstnew.c	*/
t_list	*ft_lstnew(int	content);

/*	ft_lstsize.c	*/
int	ft_lstsize(t_list *lst);

/*	create_lst.c	*/
t_list	*create_list(t_parsing *parsing);
void	get_index(t_list *a, t_parsing *parsing);

/*	print_lst.c	*/
void	print_list(t_list	*a);

/* ------------------------ SORT ------------------------------- */
/*	sort.c	*/
void	sort_two(t_list **a);
void	sort_three(t_list **a);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
void	sort_list(t_list **a, t_list **b, t_parsing *parsing);

/*	sorting_instruction.c*/
void	push(t_list **from, t_list **to);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rotate(t_list **lst, char	*instruction);
void	swap(t_list **lst, char	*instruction);
void	reverse_rotate(t_list	**lst, char *instruction);

/*	radix.c	*/
int		get_max(t_list **a);
int		add_zero(int max);
void	counting_sort(t_list **a, t_parsing	*parsing);
void	radix(t_list **a, t_list **b);

#endif