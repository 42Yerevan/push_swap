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
	int p;
	int index;

	i = 0;
	index = 0;
	p = a->array[0];
	while (i < a->count)
	{
		if (p < a->array[i])
			index = i;
		i++;
	}
	if (index <= 3)
		while (--index > 0)
			ft_write(ft_rotate(a, 'a'));
	else
		while (index++ < a->count)
			ft_write(ft_rev_rotate(a, 'a'));
	ft_write(ft_push(a, b, 'b'));
	ft_write(ft_push(a, b, 'b'));
	ft_short_sorting(a);
	while (b->count > 0)
	{
		i = 0;
		index = 0;
		ft_write(ft_push(b, a, 'a'));
		while (i < a->count)
		{
			if (a->array[0] > a->array[i])
				index = i;
			i++;
		}
		if (a->count == 3)
		{
			ft_short_sorting (a);
			continue ;
		}
		if (index == 1)
			ft_write(ft_swap(a, 'a'));
  		if (index == 2)
		{
			ft_write(ft_swap(a, 'a'));
			ft_write(ft_push(a, b, 'b'));
			ft_write(ft_swap(a, 'a'));
			ft_write(ft_push(b, a, 'b'));
		}
  		if (index == 3 && a->count == 4)
			ft_write(ft_rotate(a, 'a'));
		else if (index == 3 && a->count > 4)
		{
			ft_write(ft_rev_rotate(a, 'a'));
			ft_write(ft_push(a, b, 'b'));
			ft_write(ft_rotate(a, 'a'));
			ft_write(ft_push(b, a, 'a'));
			ft_write(ft_rotate(a, 'a'));
		}
  		if (index == 4)
			ft_write(ft_rotate(a, 'a'));
	}
}

void	ft_middle_sorting(s_stack *a, s_stack *b, int n)
{
	int i;
	int p;
	int len;
	int	index;

	i = 0;
	len = 0;
	p = a->array[0];
	while (i < n)
	{
		if (a->array[0] > p)
		{
			ft_write(ft_push(a, b, 'b'));
			len++;
		}
		else
			ft_write(ft_rotate(a, 'a'));
		i++;
	}
	i = len + 1;
	while (--i)
		ft_write(ft_push(b, a, 'a'));
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
}