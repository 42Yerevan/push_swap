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

void	ft_advanced_sorting(s_stack *a, s_stack *b, int n)
{
	int		i;
	int		j;
	int		x;
	int		p;
	int		len;
	int		arr[n];

	i = -1;
	x = 0;
	len = 0;
	while (++i < n)
		arr[i] = a->array[i];
	if (0)
		ft_swap(b, 'b');
	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] > arr[j])
			{
				x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
			j++;
		}
		i++;
	}
	p = arr[(n / 2) - 1];
	i = 0;
	while (i < n)
	{
		if (a->array[0] < p)
		{
			ft_write(ft_push(a, b, 'b'));
			len++;
		}
		else
			ft_write(ft_rotate(a, 'a'));
		i++;
	}
	if (a->count == 3)
		ft_short_sorting(a);
	if (a->count > 3)
		ft_advanced_sorting(a, b, (n - len));

	int index;

	index = 0;
	while (b->count)
	{
		i = 0;
		p = b->array[0];
		while (++i < b->count)
			if (b->array[i] > p)
			{
				p = b->array[i];
				index = i;
			}
		if (index <= b->count / 2)
		{
			index++;
			while (--index)
				ft_write(ft_rotate(b, 'b'));
		}
		else
		{
			while (index++ < b->count)
				ft_rev_rotate(b, 'b');
		}
		ft_write(ft_push(b, a, 'a'));
	}
}