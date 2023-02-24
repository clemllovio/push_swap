/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:57:59 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/24 14:03:48 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

t_list	*ft_lstlast(t_list *a)
{
	if (!a)
		return (NULL);
	while (a -> next)
		a = a -> next;
	return (a);
}
