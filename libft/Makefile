# ====================== VARIABLES ====================== #

# ---- Final Executable --- #
NAME 			=	libft.a

# ---- Directories ---- #
DIR_OBJS		=	.objs/
DIR_LIBFT		=	libft/
DIR_FT_PRINTF	=	ft_printf/

# ---- Files path ---- #
HEADERS			=	libft.h

SRCS			= 	${DIR_FT_PRINTF}ft_check_args.c \
					${DIR_FT_PRINTF}ft_print_char.c \
					${DIR_FT_PRINTF}ft_print_nbr.c \
					${DIR_FT_PRINTF}ft_printf.c \
					\
					${DIR_LIBFT}ft_strjoin.c \
					${DIR_LIBFT}ft_strlen.c \
					${DIR_LIBFT}ft_strdup.c \
					${DIR_LIBFT}ft_putchar_fd.c \
					${DIR_LIBFT}ft_putstr_fd.c \
					${DIR_LIBFT}ft_split.c \
					${DIR_LIBFT}ft_substr.c \
					${DIR_LIBFT}ft_atol.c

OBJS 			=	${addprefix ${DIR_OBJS},${SRCS:.c=.o}}

# ---- Flag---- #
CFLAG			=	-Wall -Werror -Wextra -I ${HEADERS}

# ====================== RULES ====================== #

.PHONY:				all clean fclean re

# ---- Compiled rules ---- #
all:				${NAME}

${NAME}:			${OBJS}
					ar rcs ${NAME} ${OBJS}

${DIR_OBJS}%.o: 	%.c ${HEADERS} Makefile
					@mkdir -p ${shell dirname $@}
					$(CC) $(CFLAGS) -c $< -o $@

${DIR_OBJS}:
					mkdir -p ${DIR_OBJS}

# ---- Usual Rules ---- #
clean:
					${RM} -rf ${OBJS} ${DIR_OBJS}

fclean: 			clean
					${RM} ${NAME}

re:					fclean ${NAME}
