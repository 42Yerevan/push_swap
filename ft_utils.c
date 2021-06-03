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
	x_g();
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

size_t		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

long		ft_atoi(char *str)
{
	long sign;
	long result;
	int i;

	i = -1;
	sign = 1;
	result = 0;
	while (str[++i] == '\t'
		|| str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		;
	if (str[i] == '-' && ++i)
		sign *= -1;
	if (str[i] == '+' && str[i - 1] != '-')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result *= 10;
		if (str[i] >= '0' && str[i] <= '9')
			result += (str[i++] - '0');
		else
			return (result * sign);
	}
	return (result * sign);
}