#include "push_swap.h"

void	do_push_swap(int *d, int i)
{
	t_stack	st_a;
	t_stack	st_b;

	st_a = new_stack(i);
	st_b = new_stack(i);
	fill_stack(&st_a, d, i);
	print_stack(&st_a);
	do_things(&st_a, &st_b);
	ft_putendl("\n\n Now for the sorted one:\n");
	print_stack(&st_a);
}
