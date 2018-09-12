#include "push_swap.h"

void	exec_task(char *s, t_stack *st_a, t_stack *st_b)
{
	if (strcmp(s, "sa") == 0)
		swap(st_a);
	else if (strcmp(s, "sb") == 0)
		swap(st_b);
	else if (strcmp(s, "ss") == 0)
	{
		swap(st_a);
		swap(st_b);
	}
	/*
	else if (strcmp(s, "pa") == 0)
		push(st_b, st_a);
	else if (strcmp(s, "pb") == 0)
		push(st_a, st_b);
	else if (strcmp(s, "ra") == 0)
		rotate(st_a);
	else if (strcmp(s, "rb") == 0)
		rotate(st_b);
	else if (strcmp(s, "rr") == 0)
	{
		rotate(st_a);
		rotate(st_b);
	}
	else if (strcmp(s, "rra") == 0)
		rev_rotate(st_a);
	else if (strcmp(s, "rrb") == 0)
		rev_rotate(st_b);
	else if (strcmp(s, "rrr") == 0)
	{
		rev_rotate(st_a);
		rev_rotate(st_b);
	}
	*/
}
