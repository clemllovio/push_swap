/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cllovio <cllovio@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:33:03 by cllovio           #+#    #+#             */
/*   Updated: 2023/03/09 09:49:24 by cllovio          ###   ########.fr       */
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
size_t		ft_strlen(const char *s);

/*	ft_strjoin.c */
char		*ft_strjoin(char *s1, char const *s2);

/*	ft_strdup.c	*/
char		*ft_strdup(const char *s1);

/*	ft_putchar_fd.c	*/
void		ft_putchar_fd(char c, int fd);

/*	ft_putstr_fd.c	*/
void		ft_putstr_fd(char *s, int fd);

/*	ft_split.c	*/
void		*ft_free(char **tab, int j);
char		**ft_split(char *s, char c);

/*	ft_substr.c	*/
char		*ft_substr(char *s, unsigned int start, size_t len);

/*	ft_atoi.c	*/
long int	ft_atol(char *str);

/* ---- FT_PRINTF ---- */
/* 	ft_check_args.c	*/
void		ft_check_args(char format, va_list args, int *count);

/*	ft_print_char.c	*/
void		ft_putchar(int c, int *count);
void		ft_putstr(char *s, int *count);

/*	ft_print_nbr.c	*/
void		ft_putnbr(int n, int *count);
void		ft_putnbr_base(unsigned long nbr, unsigned long size, \
			char *base, int *count);

/*	ft_printf.c	*/
int			ft_printf(const char *format, ...);

#endif