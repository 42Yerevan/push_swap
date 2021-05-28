#include "push_swap.h"

char    *ft_push(s_stack *src, s_stack *dest, char n)
{
	int		i;
	int		*new_src;
	int		*new_dst;
	
	i = 0;
	if (!(new_dst = (int *)malloc((dest->count + 1) * 4)) || !(new_src = (int *)malloc((src->count - 1) * 4)))
		return (NULL);
	new_dst[0] = src->array[0];
	while (++i < (dest->count + 1))
		new_dst[i] = dest->array[i - 1];
	i = 0;
	while (i < (src->count - 1))
	{
		new_src[i] = src->array[i + 1];
		i++;
	}
	dest->array = new_dst;
	src->array = new_src;
	src->count -= 1;
	dest->count += 1;
	return (n == 'a' ? "pa" : "pb");
}