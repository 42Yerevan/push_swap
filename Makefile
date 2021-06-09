NAME = libpush_swap.a
LIBFT = ./libft.a
SRCS = $(shell find "." -name '*.c')
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar csr

.c.o :
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
		${AR} ${NAME} ${OBJS}
		gcc -L. -lpush_swap push_swap.c -o push_swap

all :	${NAME}

clean : 
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o