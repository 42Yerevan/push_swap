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
			gcc -L. -lpush_swap push_swap.c && ./a.out 89 100 83 80 53 15 1 84 37 74 98 71 25 45 31 6 4 52 70 62 63 94 81 73 43 75 3 60 55 9 97 90 86 21 29 18 76 30 13 54 22 19 57 34 47 16 79 2 96 14 49 36 27 72 67 68 39 38 51 77 92 46 11 82 59 91 8 12 65 7 99 66 78 23 42 32 44 56 95 58 5 50 10 48 41 28 64 26 35 24 88 93 69 20 40 85 87 17 61 33


clean : 
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o