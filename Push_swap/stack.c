#include "push_swap.h"

t_stack	new_stack(int c)
{
	t_stack	st;

	st.top = -1;
	st.capacity = c;
	st.data = (int *)malloc(c);
	return (st);
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

	index = st->top - 1;
	ft_putendl("Top:");
	while (index >= 0)
	{
		ft_putnbr(st->data[index]);
		ft_putchar('\n');
		index--;
	}
	ft_putendl("Bottom");
}
