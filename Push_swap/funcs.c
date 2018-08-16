#include "push_swap.h"

void	push(t_stack *st, int n)
{
}

void	pop(t_stack *st)
{
}

void	swap(t_stack *st)
{
	int	temp;

	temp = st->data[st->top];
	st->data[st->top] = st->data[st->top - 1];
	st->data[st->top - 1] = temp;
}

void	rotate(t_stack *st)
{
}

void	rev_rotate(t_stack *st)
{
}
