/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:21:42 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/22 18:56:20 by cllovio          ###   ########.fr       */
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

/* ---- LIST ---- */

typedef struct s_list {
	int				content;
	struct s_list	*next;
	int				index;
}	t_list;

/*	ft_lstadd_back.c	*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/*	ft_lstadd_front.c	*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/*	ft_lstclear.c	*/
void	ft_lstclear(t_list **lst, void (*del)(void*));

/*	ft_lstdelone.c	*/
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/*	ft_lstlast.c	*/
t_list	*ft_lstlast(t_list *lst);

/*	ft_lstnew.c	*/
t_list	*ft_lstnew(void *content);

/*	ft_lstsize.c	*/
int	ft_lstsize(t_list *lst);

#endif