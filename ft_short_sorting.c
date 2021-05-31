#include "push_swap.h"

// void     ft_short_sorting(s_stack *stack)
// {
//     if (stack->array[0] > stack->array[1])
//         ft_write(ft_swap(stack, 'a'));
//     if (stack->array[1] > stack->array[2])
//     {
//         ft_write(ft_rotate(stack, 'a'));
//         ft_write(ft_swap(stack, 'a'));
//         ft_write(ft_rev_rotate(stack, 'a'));
//     }
//     if (stack->array[0] > stack->array[1])
//         ft_short_sorting(stack);
// }

void    ft_short_sorting(s_stack *a)
{
  int  i;
  int  p;
  int  index;

  i = -1;
  p = a->array[0];
  index = 0;
  if (a->count == 2)
  {
		if (a->array[0] > a->array[1])
	  ft_write(ft_swap(a, 'a'));
		return ;
  }
  while (++i < a->count)
	if (a->array[i] < p)
	{
	  p = a->array[i];
	  index = i;
	}
  if (index == 0 && a->array[1] > a->array[2])
  {
	ft_write(ft_rev_rotate(a, 'a'));
	ft_write(ft_swap(a, 'a'));
  }
  if (index == 1 && a->array[0] < a->array[2])
	ft_write(ft_swap(a, 'a'));
  if (index == 1 && a->array[0] > a->array[2])
	ft_write(ft_rotate(a, 'a'));
  if (index == 2 && a->array[0] < a->array[1])
	ft_write(ft_rev_rotate(a, 'a'));
  if (index == 2 && a->array[0] > a->array[1])
  {
	ft_write(ft_swap(a, 'a'));
	ft_write(ft_rev_rotate(a, 'a'));
  }
}

// void	ft_test(s_stack *a, s_stack *b, int i)
// {
// 	ft_write(ft_push(b, a, 'a'));
// 	if (i == 2)
// 			ft_write(ft_swap(a, 'a'));
//   		if (i == 3)
// 		{
// 			ft_write(ft_swap(a, 'a'));
// 			ft_write(ft_push(a, b, 'b'));
// 			ft_write(ft_swap(a, 'a'));
// 			ft_write(ft_push(b, a, 'b'));
// 		}
//   		if (i == 4 && a->count == 4)
// 			ft_write(ft_rotate(a, 'a'));
// 		else if (i == 4 && a->count > 4)
// 		{
// 			ft_write(ft_rev_rotate(a, 'a'));
// 			ft_write(ft_push(a, b, 'b'));
// 			ft_write(ft_rev_rotate(a, 'a'));
// 			ft_write(ft_push(b, a, 'a'));
// 		}
//   		if (i == 5)
// 			ft_write(ft_rev_rotate(a, 'a'));
// }

void	ft_five_number_sorting(s_stack *a, s_stack *b)
{
	int i;

	ft_write(ft_push(a, b, 'b'));
	ft_write(ft_push(a, b, 'b'));
	ft_short_sorting(a);
	while (b->count > 0)
	{
		i = -1;
		ft_write(ft_push(b, a, 'a'));
		while (++i < a->count)
		if (a->array[i] > a->array[0])
			break ;
		if (i == 2)
			ft_write(ft_swap(a, 'a'));
  		if (i == 3)
		{
			ft_write(ft_swap(a, 'a'));
			ft_write(ft_push(a, b, 'b'));
			ft_write(ft_swap(a, 'a'));
			ft_write(ft_push(b, a, 'b'));
		}
  		if (i == 4 && a->count == 4)
			ft_write(ft_rotate(a, 'a'));
		else if (i == 4 && a->count > 4)
		{
			ft_write(ft_rev_rotate(a, 'a'));
			ft_write(ft_push(a, b, 'b'));
			ft_write(ft_rev_rotate(a, 'a'));
			ft_write(ft_push(b, a, 'a'));
		}
  		if (i == 5)
			ft_write(ft_rev_rotate(a, 'a'));
	}
}