#include "push_swap.h"

char    *ft_double_swap(s_stack *a, s_stack *b)
{
	char    *at;
	char    *bt;

	at = ft_swap(a, 'a');
	bt = ft_swap(b, 'b');
	if (at || bt)
		return ("ss");
	return (NULL);
}