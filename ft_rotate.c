#include "push_swap.h"

char    *ft_rotate(s_stack *stack, char type)
{
	int		i;
	int		*new_stack;

	i = 0;
	if (!(new_stack = (int *)malloc((stack->count) * 4)))
		return (NULL);
    new_stack[stack->count - 1] = stack->array[0];
	while (i < (stack->count - 1))
	{
		new_stack[i] = stack->array[i + 1];
		i++;
	}
	stack->array = new_stack;
	return (type == 'a' ? "ra" : "rb");
}