NAME = libft.a

CFLAG = -Wall -Werror -Wextra -I ${HEADERS}

DIR_OBJS = .objs/

SRCS = 	ft_check_args.c \
		ft_print_char.c \
		ft_print_nbr.c \
		ft_printf.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strdup.c

OBJS = ${addprefix ${DIR_OBJS},${SRCS:.c=.o}}

HEADERS = libft.h

all : ${NAME}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

${DIR_OBJS}%.o: %.c ${HEADERS} Makefile
	@mkdir -p ${shell dirname $@}
	$(CC) $(CFLAGS) -c $< -o $@

${DIR_OBJS}:
	mkdir -p ${DIR_OBJS}

clean :
	${RM} -rf ${OBJS} ${DIR_OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean ${NAME}

.PHONY: all clean fclean re