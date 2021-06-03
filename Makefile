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
			gcc -L. -lpush_swap push_swap.c -o push_swap && ./push_swap 75  50  89  67  74  21  94  29  41  45  71  32  87  25  98  53  72  17  15  91  78  22  81  13  40  65  18  47  97  62   5   8  43 100  38  77  35  44  56  64  93  30  60   7  85  63  34  36  86   4  79  90  92   3   1  76  80  37  52  84  61  57  49  82  16  83  42  33  19  28  39  66  20  23  68  88  26  11  51  14   2  96  27  69  31  10  59  48  46   6  70  54  12   9  73  99  58  55  95  24


clean : 
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re .c.o