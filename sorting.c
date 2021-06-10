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
	int count;

	count = 0;
	while (a->count > 3)
	{
		i = 0;
		index = 0;
		p = a->array[0];
		while (i < a->count)
		{	
			if (a->array[i] < p)
			{
				index = i;
				p = a->array[i];
			}
			i++;
		}
		if (index > 2)
			while (index < a->count)
			{
				ft_write(ft_rev_rotate(a, 'a'));
				index++;
			}
		else
		{
			while (index)
			{
				ft_write(ft_rotate(a, 'a'));
				index--;
			}
		}
		ft_write(ft_push(a, b, 'b'));
		count++;
	}
	ft_short_sorting(a);
	count++;
	while (--count)
		ft_write(ft_push(b, a, 'a'));
}

void	ft_advanced_sorting(s_stack *a, s_stack *b, int n)
{
	int		i;
	int		j;
	int		x;
	int		p;
	int		len;
	int 	index;
	int		arr[n];

	i = -1;
	x = 0;
	len = 0;
	index = 0;
	while (++i < n)
		arr[i] = a->array[i];
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
	p = arr[n / 3];
	i = 0;
	while (i < n)
	{	
		if(a->array[0] > p && a->array[a->count - 1] < p)
		{
			ft_write(ft_rev_rotate(a, 'a'));
		}
		else if (a->array[0] < p)
		{
			ft_write(ft_push(a, b, 'b'));
			if (b->array[0] > b->array[1]  && b->count > 2) //Test
				ft_write(ft_swap(b, 'b'));
			len++;
		}
		else if (b->count > 1 && b->array[0] < b->array[1])
			ft_write(ft_double_rotate(a, b));
		else
			ft_write(ft_rotate(a, 'a'));
		i++;
	}
	if (a->count == 3)
		ft_short_sorting(a);
	if (a->count > 3)
		ft_advanced_sorting(a, b, (n - len));
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
				ft_write(ft_rev_rotate(b, 'b'));
		}
		ft_write(ft_push(b, a, 'a'));
	}
}

void	ft_middle_sorting(s_stack *a, s_stack *b, int n)
{
	int		i;
	int		j;
	int		x;
	int		p;
	int		len;
	int 	index;
	int		arr[n];

	i = -1;
	x = 0;
	len = 0;
	index = 0;
	while (++i < n)
		arr[i] = a->array[i];
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
	p = arr[n / 3];
	i = 0;
	while (i < n)
	{	
		if(a->array[0] > p && a->array[a->count - 1] < p)
		{
			ft_write(ft_rev_rotate(a, 'a'));
		}
		else if (a->array[0] < p)
		{
			ft_write(ft_push(a, b, 'b'));
			if (b->array[0] > b->array[1]  && b->count > 2) //Test
				ft_write(ft_swap(b, 'b'));
			len++;
		}
		else if (b->count > 1 && b->array[0] < b->array[1])
			ft_write(ft_double_rotate(a, b));
		else
			ft_write(ft_rotate(a, 'a'));
		i++;
	}
	if (a->count == 3)
		ft_short_sorting(a);
	if (a->count > 3)
		ft_middle_sorting(a, b, (n - len));
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
				ft_write(ft_rev_rotate(b, 'b'));
		}
		ft_write(ft_push(b, a, 'a'));
	}
}