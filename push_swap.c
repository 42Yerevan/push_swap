#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(-1);
}

int		x = 0;

void	x_g()	
{
	x++;
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
	if (ft_is_valid(&a, &d))
		ft_error();
	if (ac <= 4 && d)
		ft_short_sorting(&a);
	else if (ac <= 6 && d)
		ft_five_number_sorting(&a, &b);
	else if (ac <= 501 && d)
		ft_advanced_sorting(&a, &b, (ac - 1));
	free(b.array);
	return (0);
}