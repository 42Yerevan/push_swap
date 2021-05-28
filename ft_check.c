#include "push_swap.h"

int		ft_is_valid(s_stack a)
{
	int i;
	int j;

	i = 0;
	while (i < (a.count - 1))
	{
		j = i + 1;
		while (j < a.count)
		{
			if (a.array[i] == a.array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_check(char **arg, int n)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (arg[i][j])
		{
			if (!(arg[i][j] >= '0' && arg[i][j] <= '9'))
				return (1);
			j++;
		}
		if (ft_atoi(arg[i]) < -2147483648 && ft_atoi(arg[i]) > 2147483647)
			return (1);
		i++;
	}
	return (0);
}