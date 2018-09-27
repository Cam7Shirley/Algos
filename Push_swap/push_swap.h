#include "./libft/libft.h"
#include <stdio.h>

typedef	struct		s_stack
{
	int				top;
	int				capacity;
	int				*data;
}					t_stack;

int				is_empty(t_stack *st);
t_stack			new_stack(int c);
void			check_duplicates(int *d, int n);
void			print_stack(t_stack *st);
void			fill_stack(t_stack *st, int *d, int i);
void			push_a(t_stack *st_a, t_stack *st_b);
void			swap_a(t_stack *st_a);
void			rotate_a(t_stack *st_a);
void			rev_rotate_a(t_stack *st_a);
void			push_b(t_stack *st_a, t_stack *st_b);
void			swap_b(t_stack *st_b);
void			rotate_b(t_stack *st_b);
void			rev_rotate_b(t_stack *st_b);
void			do_push_swap(int *d, int i);
