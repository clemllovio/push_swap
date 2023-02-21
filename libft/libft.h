/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:33:03 by cllovio           #+#    #+#             */
/*   Updated: 2023/02/21 14:16:20 by cllovio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* ---- LIBRAIRIE ----*/
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* ---- LIBFT ---- */
/*	ft_strlen.c	*/
size_t	ft_strlen(const char *s);

/*	ft_strjoin.c */
char	*ft_strjoin(char *s1, char const *s2);

/*	ft_strdup.c	*/
char	*ft_strdup(const char *s1);

/* ---- FT_PRINTF ---- */
/* 	ft_check_args.c	*/
void	ft_check_args(char format, va_list args, int *count);

/*	ft_print_char.c	*/
void	ft_putchar(int c, int *count);
void	ft_putstr(char *s, int *count);

/*	ft_print_nbr.c	*/
void	ft_putnbr(int n, int *count);
void	ft_putnbr_base(unsigned long nbr, unsigned long size, \
		char *base, int *count);

/*	ft_printf.c	*/
int		ft_printf(const char *format, ...);

#endif