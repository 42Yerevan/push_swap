#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>

typedef	struct	t_stack
{
	int		count;
	int		*array;
}				s_stack;

long	ft_atoi(char *str);
void	ft_init(s_stack *a, int ac, char **arr);
char	*ft_swap(s_stack *stack, char type);
char	*ft_double_swap(s_stack *a, s_stack *b);
char    *ft_push(s_stack *src, s_stack *dest, char n);
char    *ft_rotate(s_stack *stack, char type);
char    *ft_double_rotate(s_stack *a, s_stack *b);
char    *ft_rev_rotate(s_stack *stack, char type);
char    *ft_double_rev_rotate(s_stack *a, s_stack *b);
int		ft_check(char	**arg, int n);
int		ft_is_valid(s_stack *a, int *d);
void    ft_short_sorting(s_stack *stack);
void    ft_write(char *str);
size_t	ft_strlen(const char *str);
void	ft_five_number_sorting(s_stack *a, s_stack *b);
void	ft_middle_sorting(s_stack *a, s_stack *b, int n);
void	ft_advanced_sorting(s_stack *a, s_stack *b, int n);
void	x_g();

#endif