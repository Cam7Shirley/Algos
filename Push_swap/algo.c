#include "push_swap.h"

int		find_highest(t_stack *st, int n)
{
	int	index;
	int	high;
	int	pos;

	index = 0;
	pos = -1;
	high = -2147483648;
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
		rotate_a(st);
		return (1);
	}
	return (0);
}

int		find_lowest(t_stack *st_a, t_stack *st_b, int n)
{
	int	index;
	int	low;
	int	pos;

	index = 0;
	pos = -1;
	low = 2147483647;
	while (index < n)
	{
		if (st_a->data[index] < low)
		{
			pos = index;
			low = st_a->data[index];
		}
		index++;
	}
	if (pos == st_a->top - 1)
	{
		push_b(st_a, st_b);
		return (1);
	}
	return (0);
}

int		check_sorted(t_stack *st_a, t_stack *st_b)
{
	int	index;
	int	sorted;

	index = 0;
	sorted = 1;
	while (index < st_a->top - 1 && sorted == 1)
	{
		if (st_a->data[index] > st_a->data[index + 1])
			sorted = 1;
		else
			sorted = 0;
		if (is_empty(st_b) == 0)
			check_b(st_a, st_b);
		index++;
	}
	if (sorted == 1)
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
		if (find_highest(st_a, st_a->top) == 1)
			flag = 0;
		if (find_lowest(st_a, st_b, st_a->top) == 1 && flag == 1)
			flag = 0;
		else
		{
			if (st_a->data[st_a->top - 1] > st_a->data[st_a->top - 2])
				swap_a(st_a);
			else
				push_b(st_a, st_b);
		}
		flag = 1;
	}
}
