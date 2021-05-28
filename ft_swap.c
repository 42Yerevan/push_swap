#include "push_swap.h"

char    *ft_swap(s_stack *stack, char type)
{
	int	n;
	
	if (stack->count < 3)
		return (NULL);
	n = stack->array[0];
	stack->array[0] = stack->array[1];
	stack->array[1] = n;
	return (type == 'a' ? "sa" : "sb");
}