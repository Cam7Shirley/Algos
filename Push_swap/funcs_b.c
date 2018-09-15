/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 07:41:21 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/12 07:51:32 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stack *st_a, t_stack *st_b)
{
	int	temp;

	if (is_empty(st_a) == 0)
	{
		temp = st_a->data[st_a->top - 1];
		st_a->data[st_a->top - 1] = 0;
		st_a->top--;
		if (is_empty(st_b) == 1)
			st_b->top++;
		st_b->data[st_b->top] = temp;
		st_b->top++;
	}
}

void	swap_b(t_stack *st_b)
{
	int	temp;

	temp = st_b->data[st_b->top - 1];
	st_b->data[st_b->top - 1] = st_b->data[st_b->top - 2];
	st_b->data[st_b->top - 2] = temp;
}

void	rotate_b(t_stack *st_b)
{
	int	temp;
	int	index;

	index = st_b->top - 1;
	temp = st_b->data[index];
	while (index > 0)
	{
		st_b->data[index] = st_b->data[index - 1];
		index--;
	}
	st_b->data[index] = temp;
}

void	rev_rotate_b(t_stack *st_b)
{
	int	temp;
	int	index;

	index = 0;
	temp = st_b->data[index];
	while (index < st_b->top - 1)
	{
		st_b->data[index] = st_b->data[index + 1];
		index++;
	}
	st_b->data[index] = temp;
}
