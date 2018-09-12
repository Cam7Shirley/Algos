#include "push_swap.h"

int	find_highest(t_stack *st, int n)
{
	int	index;
	int	high;
	int	pos;

	index = 0;
	pos = 0;
	while (index < n)
	{
		if (st->data[index] > high)
		{
			pos = index;
			high = st->data[index];
		}
		index++;
	}
	if (pos == st->top - 1)
	{
		rotate(st);
		return (1);
	}
	return (0);
}

int	find_lowest(t_stack *st_f, t_stack *st_t, int n)
{
	int	index;
	int	low;
	int	pos;

	index = 0;
	pos = 0;
	while (index < n)
	{
		if (st_f->data[index] < low)
		{
			pos = index;
			low = st_f->data[index];
		}
		index++;
	}
	if (pos == st_f->top - 1)
	{
		push(st_f, st_t);
		return (1);
	}
	return (0);
}

int	check_sorted(t_stack *st_a, t_stack *st_b)
{
	int	index_a;
	int	index_b;
	int	sorted;

	index_a = 0;
	index_b = 0;
	sorted = 1;
	while (index_a < st_a->top - 1 && sorted == 1)
	{
		if (st_a->data[index_a] < st_a->data[index_a + 1] && index_a < st_a->top - 2)
			sorted = 1;
		else
			sorted = 0;
		index_a++;
	}
	if (sorted == 1 && is_empty(st_b) == 1)
		return (1);
	else
		return (0);
}

void	do_things(t_stack *st_a, t_stack *st_b)
{
	int	flag;

	flag = 1;
	while (check_sorted(st_a, st_b) == 0 && flag == 1)
	{
		if (find_highest(st_a) == 1)
			flag = 0;
		if (find_lowest(st_a, st_b) == 1 && flag == 1)
			flag = 0;
		else
		{
			if (st_a->data[st_a->top - 1] > st_a->data[st_a->top - 2])
				swap_a(st_a);
		}
	}
}
