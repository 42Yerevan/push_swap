#include "push_swap.h"

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

void	ft_five_number_sorting(s_stack *a, s_stack *b)
{
	int i;
	int index;

	ft_write(ft_push(a, b, 'b'));
	ft_write(ft_push(a, b, 'b'));
	ft_short_sorting(a);
	while (b->count > 0)
	{
		i = 1;
		index = 0;
		ft_write(ft_push(b, a, 'a'));
		while (i < a->count)
			if (a->array[0] > a->array[i++])
				index = i;
		if (a->count == 3)
		{
			ft_short_sorting (a);
			continue ;
		}
		if (index == 2)
			ft_write(ft_swap(a, 'a'));
  		if (index == 3)
		{
			ft_write(ft_swap(a, 'a'));
			ft_write(ft_push(a, b, 'b'));
			ft_write(ft_swap(a, 'a'));
			ft_write(ft_push(b, a, 'b'));
		}
  		if (index == 4 && a->count == 4)
			ft_write(ft_rotate(a, 'a'));
		else if (index == 4 && a->count > 4)
		{
			ft_write(ft_rev_rotate(a, 'a'));
			ft_write(ft_push(a, b, 'b'));
			ft_write(ft_rotate(a, 'a'));
			ft_write(ft_push(b, a, 'a'));
			ft_write(ft_rotate(a, 'a'));
		}
  		if (index == 5)
			ft_write(ft_rev_rotate(a, 'a'));
	}
}

void	ft_middle_sorting(s_stack *a, s_stack *b)
{
	int i;
	int	p;
	int	index;

	while (a->count > 0)
	{
		i = 1;
		p = a->array[0];
		index = 0;
		while (i < a->count)
		{
			if (a->array[i] < p)
			{
				index = i;
				p = a->array[i];
			}
			i++;
		}
		if (index <= (a->count / 2))
			while (index > 0)
			{
				ft_write(ft_rotate(a, 'a'));
				index--;
			}
		else
			while (index < a->count)
			{
				ft_write(ft_rev_rotate(a, 'a'));
				index++;
			}
		ft_write(ft_push(a, b, 'b'));
		}
	i = b->count;
	while (i > 0)
	{
		ft_write(ft_push(b, a, 'a'));
		i--;
	}

	// int		i;
	// int		j;
	// int		p;

	// i = 0;
	// while (i < a->count / 2)
	// {
	// 	j = 0;
	// 	p = 0;
	// 	while (j < a->count)
	// 	{
	// 		if (a->array[i] > a->array[j])
	// 			p = a->array[i];
	// 		j++;
	// 	}
	// 	i++;
	// }
	// printf("\n\n\n\n\n\n%d\n\n\n\n\n\n", p);


// 	// int i;
// 	// int	p;

// 	// i = 0;
// 	// p = a->array[a->count - 1];
//     // // printf("%d\n\n\n", p);
// 	// while (a->array[0] != p)
// 	// {
// 	// 	if (a->array[0] <= p)
// 	// 			ft_write(ft_rotate(a, 'a'));
// 	// 	else
// 	// 		ft_write(ft_push(a, b, 'b'));
// 	// 	i++;
// 	// }
//     // ft_write(ft_rotate(a, 'a'));
	if (0)
		ft_write(ft_rotate(b, 'a'));
//     // i = -1;
//     // while (++i < a->count)
// 	//     printf("last --- %d\n", a->array[i]);
}