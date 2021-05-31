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
		cp $(LIBFT) ${NAME}
		${AR} ${NAME} ${OBJS}

all :	${NAME}

compile:	${NAME}
			gcc -L. -lpush_swap push_swap.c && ./a.out 45 -78 1 -94 98 75 28 0 54 33 -84 25 16
			rm a.out


clean : 
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o