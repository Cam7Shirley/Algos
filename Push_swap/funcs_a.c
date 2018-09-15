/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 07:28:40 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/12 07:41:15 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *st_a, t_stack *st_b)
{
	int	temp;

	if (is_empty(st_b) == 0)
	{
		temp = st_b->data[st_b->top - 1];
		st_b->data[st_b->top - 1] = 0;
		st_b->top--;
		if (st_b->top == 0)
			st_b->top = -1;
		st_a->data[st_a->top] = temp;
		st_a->top++;
	}
}

void	swap_a(t_stack *st_a)
{
	int	temp;

	temp = st_a->data[st_a->top - 1];
	st_a->data[st_a->top - 1] = st_a->data[st_a->top - 2];
	st_a->data[st_a->top - 2] = temp;
}

void	rotate_a(t_stack *st_a)
{
	int	temp;
	int	index;

	index = st_a->top - 1;
	temp = st_a->data[index];
	while (index > 0)
	{
		st_a->data[index] = st_a->data[index - 1];
		index--;
	}
	st_a->data[index] = temp;
}

void	rev_rotate_a(t_stack *st_a)
{
	int	temp;
	int	index;

	index = 0;
	temp = st_a->data[index];
	while (index < st_a->top - 1)
	{
		st_a->data[index] = st_a->data[index + 1];
		index++;
	}
	st_a->data[index] = temp;
}
