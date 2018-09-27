#include "push_swap.h"

void	do_push_swap(int *d, int i)
{
	t_stack	st_a;
	t_stack	st_b;

	st_a = new_stack(i);
	st_b = new_stack(i);
	fill_stack(&st_a, d, i);
	print_stack(&st_a);
}
