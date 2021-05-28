#include "push_swap.h"

char    *ft_double_rev_rotate(s_stack *a, s_stack *b)
{
	char    *at;
	char    *bt;

	at = ft_rev_rotate(a, 'a');
	bt = ft_rev_rotate(b, 'b');
	if (at || bt)
		return ("rrr");
	return (NULL);
}