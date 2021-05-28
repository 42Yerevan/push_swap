#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(-1);
}

int     main(int ac, char **av)
{
	int			i;
	int			p;
	s_stack		a;
	s_stack		b;

	i = 0;
	b.count = 0;

	if (ft_check(av, (ac - 1)))
		ft_error();
	ft_init(&a, ac, av);
	if (ft_is_valid(a))
		ft_error();
	// ft_swap(&a, 'a');
	// ft_push(&a, &b, 'b');
	// ft_push(&a, &b, 'b');
	// ft_push(&a, &b, 'b');
	// // ft_rotate(&a, 'a');
	// // ft_rotate(&b, 'b');
	// ft_double_rotate(&a, &b);
	// // ft_rev_rotate(&a, 'a');
	// // ft_rev_rotate(&b, 'b');
	// ft_double_rev_rotate(&a, &b);
	// ft_swap(&a, 'a');
	// ft_push(&b, &a, 'a');
	// ft_push(&b, &a, 'a');
	// ft_push(&b, &a, 'a');
	// while (i++ < (a.count - 1))
	// 	printf("a.num --- %d\n", a.array[i]);
	// i = -1;
	// while (i++ < (b.count - 1))
	// 	printf("b.num --- %d\n", b.array[i]);
	p = a.array[a.count - 1];
	while (a.array[i] != p)
	{
		if (a.array[i] < p)
		{
			ft_push(&a, &b, 'a');
			if(b.count > 1)
			{
				//TODO: RECURSION
			}
		} else {
			ft_rotate(&a, 'a');
		}
		i++;
	}
	return (0);
}