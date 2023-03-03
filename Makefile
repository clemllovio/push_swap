# ====================== VARIABLES ====================== #

# ---- Final executable ---- #
NAME		=	push_swap

LIBFT		=	libft/libft.a

# ---- Directories ---- #
DIR_HEADERS	=	header/
DIR_SRCS 	=	src/
DIR_LIBFT 	=	libft/
DIR_OBJS 	=	.objs/

# ---- Files path ---- #
HEADERS 	= 	${DIR_HEADERS}push_swap.h \
				${DIR_LIBFT}libft.h

SRCS		=	${DIR_SRCS}main.c \
				$(DIR_SRCS)parsing.c \
				${DIR_SRCS}list/ft_lstnew.c\
				${DIR_SRCS}list/print_lst.c\
				${DIR_SRCS}list/create_list.c\
				${DIR_SRCS}list/ft_lstadd_back.c\
				${DIR_SRCS}list/ft_lstlast.c\
				${DIR_SRCS}list/ft_lstclear.c\
				${DIR_SRCS}sort/sort.c \
				${DIR_SRCS}sort/radix.c \
				${DIR_SRCS}sort/sorting_instruction.c\
				# ${DIR_SRCS}list/ft_lstsize.c\
				# ${DIR_SRCS}list/ft_lstadd_front.c\
				# ${DIR_SRCS}list/ft_lstdelone.c\


OBJS		=	${addprefix ${DIR_OBJS},${SRCS:.c=.o}}

# ---- Flag ---- #
CFLAGS 		= 	-Wall -Werror -Wextra

# ====================== RULES ====================== #

.PHONY: all re clean fclean FORCE

# ---- Compiled rules ---- #
all:			${NAME}

${DIR_OBJS}%.o: %.c ${HEADERS} Makefile
				@ mkdir -p ${shell dirname $@}
				${CC} ${CFLAGS} -c $< -o $@

${NAME}: 		${LIBFT} ${OBJS}
				${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}

${DIR_OBJS}:
				mkdir -p ${DIR_OBJS}

${LIBFT}: 		FORCE
				${MAKE} -C ${DIR_LIBFT}

# ---- Usual rules --- #
clean:
				make fclean -C ${DIR_LIBFT}
				${RM} -rf ${DIR_OBJS}

fclean:			clean
				${RM} ${NAME}
				make fclean -C ${DIR_LIBFT}

re: 			fclean all

FORCE:
