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

all :	${NAME}

compile:	${NAME}
			gcc -L. -lpush_swap push_swap.c -o push_swap && ./push_swap 100  19  18 b 33 0  45464645656 6  76  15 35 27 70 40  97  75 55   2  59  12  65   5  78  62  17  85  39  11  63  81  88  10  64  60  32  46  69   3  72  53  79  84  90  16  83  68  36  38  22  37   1  21  52  99   8   4  28  45  87  56  77  73  20  48  54  44  25  57  86  41  94  93  43  74   7  96  47  66  80  51  58  14  31  82  24  13  61  71  42  34  89  50  26  67  49  95  29  30  23   9  92  98  91
clean : 
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o