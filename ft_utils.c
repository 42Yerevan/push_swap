#include "push_swap.h"

void       ft_init(s_stack *a, int ac, char **ar)
{
	int i;

	i = -1;
	if (!(a->array = (int *)malloc((ac - 1) * 4)))
		return ;
	a->count = ac - 1;
	while (++i < (ac - 1))
		a->array[i] = ft_atoi(ar[i + 1]);
}

void        ft_write(char *str)
{
	static int i;

	i = 0;
	i++;
	printf("count --- %d\n", i);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}