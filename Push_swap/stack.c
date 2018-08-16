#include "push_swap.h"

t_stack	new_stack(unsigned int c)
{
	t_stack stack;

	stack.capacity = c;
	stack.top = -1;
	stack.data = (int *)(malloc(c * sizeof(int)));
	return (stack);
}

void	fill_stack(t_stack *st, int *d, int i)
{
	int	index;

	index = 0;
	while (index < i)
	{
		st->data[index] = d[index];
		index++;
		st->top++;
	}
	st->top++;
}

int	is_full(t_stack *st)
{
	unsigned int	t;

	t = st->top;
	if (t >= st->capacity)
		return (1);
	else
		return (0);
}

int	is_empty(t_stack *st)
{
	if (st->top == -1)
		return (1);
	else
		return (0);
}

void	print_stack(t_stack *st)
{
	int	index;

	index = 0;
	while (index < st->top)
	{
		ft_putnbr(st->data[index]);
		ft_putchar('\n');
		index++;
	}
}
