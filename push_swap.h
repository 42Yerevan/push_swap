#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>

typedef	struct	t_stack
{
	int		top;
	int		count;
	int		*array;
}				s_stack;

int		ft_atoi(char *str);
void	ft_init(s_stack *a, int ac, char **arr);
char	*ft_swap(s_stack *stack, char type);
char	*ft_double_swap(s_stack *a, s_stack *b);
char    *ft_push(s_stack *src, s_stack *dest, char n);
char    *ft_rotate(s_stack *stack, char type);
char    *ft_double_rotate(s_stack *a, s_stack *b);
char    *ft_rev_rotate(s_stack *stack, char type);
char    *ft_double_rev_rotate(s_stack *a, s_stack *b);
int		ft_check(char	**arg, int n);
int		ft_is_valid(s_stack a);

#endif