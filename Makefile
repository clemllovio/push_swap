NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

DIR_HEADERS = header/
DIR_SRCS =	src/
DIR_LIBFT = libft/
DIR_OBJS = .obj/
LIBFT = ${DIR_LIBFT}libft.a

HEADERS = ${DIR_HEADERS}push_swap.h \
		${DIR_LIBFT}libft.h

SRCS	= ${DIR_SRCS}main.c \
			$(DIR_SRCS)utils.c \

OBJS	= ${addprefix ${DIR_OBJS},${SRCS:.c=.o}}

.PHONY: all re clean fclean FORCE

all:	${NAME}

${DIR_OBJS}%.o: %.c ${HEADERS} Makefile
		@mkdir -p ${shell dirname $@}
		${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${LIBFT} ${OBJS}
		${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}

${DIR_OBJS}:
		mkdir -p ${DIR_OBJS}

${LIBFT}: FORCE
	${MAKE} -C ${DIR_LIBFT}

clean :
		make fclean -C ${DIR_LIBFT}
		${RM} -rf ${DIR_OBJS}

fclean :	clean
		${RM} ${NAME}
		make fclean -C ${DIR_LIBFT}

re: fclean all

FORCE :
