#include "push_swap.h"

void	push(t_stack *st_f, t_stack *st_t)
{
	int	temp;

	if (is_empty(st_f) == 0)
	{
		temp = st_f->data[st_f->top - 1];
		st_f->data[st_f->top - 1] = 0;
		st_f->top--;
		st_t->data[st_t->top] = temp;
		st_t->top++;
	}
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
	int	temp;
	int	index;

	index = st->top - 1;
	temp = st->data[index];
	while (index > 0)
	{
		st->data[index] = st->data[index - 1];
		index--;
	}
	st->data[index] = temp;
}

void	rev_rotate(t_stack *st)
{
	int	temp;
	int	index;

	index = 0;
	temp = st->data[index];
	while (index < st->top - 1)
	{
		st->data[index] = st->data[index + 1];
		index++;
	}
	st->data[index] = temp;
}
