#include "push_swap.h"

t_stack	new_stack(unsigned int c)
{
	t_stack stack;

	stack.capacity = c;
	stack.top = 0;
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
}

int	is_empty(t_stack *st)
{
	if (st->top == 0)
		return (1);
	else
		return (0);
}

void	print_stack(t_stack *st)
{
	int	index;

	index = st->top - 1;
	while (index >= 0)
	{
		ft_putnbr(st->data[index]);
		ft_putchar('\n');
		index--;
	}
}
