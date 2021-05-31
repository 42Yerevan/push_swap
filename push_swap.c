#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(-1);
}

int     main(int ac, char **av)
{
	int			i;
	int			d;
	s_stack		a;
	s_stack		b;

	i = -1;
	d = 0;
	b.count = 0;

	if (ft_check(av, (ac - 1)))
		ft_error();
	ft_init(&a, ac, av);
	a.top = 0;
	if (ft_is_valid(&a, &d))
		ft_error();
	if (ac <= 4 && d)
		ft_short_sorting(&a);
	else if (ac <= 6 && d)
		ft_five_number_sorting(&a, &b);
	while (i++ < (a.count - 1))
		printf("a.num --- %d\n", a.array[i]);
	// i = -1;
	// while (i++ < (b.count - 1))
	// 	printf("b.num --- %d\n", b.array[i]);
	// p = a.array[a.count - 1];
	// printf("num --- %d\n", p);
	// while (a.array[i] != p)
	// {
	// 	if (a.array[i] < p)
	// 	{
	// 		ft_push(&a, &b, 'a');
	// 		// if(b.count > 1)
	// 		// {
	// 		// 	//TODO: RECURSION
	// 		// }
	// 	}
	// 	else
	// 	{
	// 		ft_rotate(&a, 'a');
	// 	}
	// 	i++;
	// }
	return (0);
}