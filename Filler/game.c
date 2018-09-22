/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:02:43 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/22 11:01:58 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	find_pos(t_game g)
{
	int	ix;
	int	iy;

	ix = 0;
	iy = 0;
	while (ix < g.x_board)
	{
		while (iy < g.y_board)
		{
			if (g.map[ix][iy] == g.player || g.map[ix][iy] == g.player + 32)
			{
				g.x_placer = ix;
				g.y_placer = iy;
			}
			iy++;
		}
		ix++;
		iy = 0;
	}
	dprintf(2, "X Pos: %d\t Y Pos: %d\n", g.x_placer, g.y_placer);
	return (g);
}

t_game	find_new_shape(t_game g)
{
	int	index_x;
	int	index_y;

	index_x = g.x_placer + 1;
	index_y = g.y_placer + 1;
	while (index_x < g.x_board)
	{
		while (index_y < g.y_board)
		{
			if (g.player == 1)
			{
				if (g.map[index_x][index_y] == 'O' || g.map[index_x][index_y] == 'o')
				{
					g.x_placer = index_x;
					g.y_placer = index_y;
				}
			}
			else if (g.player == 2)
			{
				if (g.map[index_x][index_y] == 'X' || g.map[index_x][index_y] == 'x')
				{
					g.x_placer = index_x;
					g.y_placer = index_y;
				}
			}
			index_y++;
		}
		index_x++;
		index_y = 0;
	}
	return (g);
}

void	place_piece(t_game g)
{
	int	x;
	int	y;

	if (g.player == 1)
		g = find_placement_one(g, g.x_placer, g.y_placer);
	else if (g.player == 2)
		g = find_placement_two(g, g.x_placer, g.y_placer);
	x = find_x_coord(g);
	y = find_y_coord(g);
	if (x >= 0 && y >= 0)
	{
		ft_putnbr(x);
		ft_putchar(' ');
		ft_putnbr(y);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(0);
		ft_putchar(' ');
		ft_putnbr(0);
		ft_putchar('\n');
	}
}
