#include "push_swap.h"

char    *ft_double_rotate(s_stack *a, s_stack *b)
{
	char    *at;
	char    *bt;

	at = ft_rotate(a, 'a');
	bt = ft_rotate(b, 'b');
	if (at || bt)
		return ("rr");
    //TODO: ONCE AGAIN LOOK AT THE COMMAND DESCRIPTION
	return (NULL);
}