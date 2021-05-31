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

char    *ft_double_rotate(s_stack *a, s_stack *b)
{
	char    *at;
	char    *bt;

	at = ft_rotate(a, 'a');
	bt = ft_rotate(b, 'b');
	if (at || bt)
		return ("rr");
	return (NULL);
}

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