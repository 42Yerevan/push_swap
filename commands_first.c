#include "push_swap.h"

char    *ft_push(s_stack *src, s_stack *dest, char n)
{
	int		i;
	int		*new_src;
	int		*new_dst;
	
	i = 0;
	if (!(new_dst = (int *)malloc((dest->count + 1) * 4)) || !(new_src = (int *)malloc((src->count - 1) * 4)))
		return (NULL);
	new_dst[0] = src->array[0];
	while (++i < (dest->count + 1))
		new_dst[i] = dest->array[i - 1];
	i = 0;
	while (i < (src->count - 1))
	{
		new_src[i] = src->array[i + 1];
		i++;
	}
	dest->array = new_dst;
	src->array = new_src;
	src->count -= 1;
	dest->count += 1;
	return (n == 'a' ? "pa" : "pb");
}

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

char    *ft_rev_rotate(s_stack *stack, char type)
{
	int		i;
	int		*new_stack;

	i = 0;
	if (!(new_stack = (int *)malloc((stack->count) * 4)))
		return (NULL);

    new_stack[0] = stack->array[stack->count - 1];

	while (++i < (stack->count + 1))
		new_stack[i] = stack->array[i - 1];

	stack->array = new_stack;
	return (type == 'a' ? "rra" : "rrb");
}