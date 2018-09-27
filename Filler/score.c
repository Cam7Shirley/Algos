/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   score.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 11:03:37 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 12:47:42 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	alloc_score(t_game g)
{
	int		ix;
	int		iy;

	ix = 0;
	g.score = (int**)malloc(g.x_board * sizeof(int*));
	while (ix < g.x_board)
	{
		iy = 0;
		g.score[ix] = (int*)malloc(g.y_board * sizeof(int));
		while (iy < g.y_board)
		{
			g.score[ix][iy] = 0;
			iy++;
		}
		ix++;
	}
	return (g);
}

t_game	assign_down(t_game g, int sc, int x)
{
	int	num;
	int	y;

	num = sc;
	y = g.y_opp;
	while (y < g.y_board)
	{
		if (g.map[x][y] == g.opp || g.map[x][y] == g.opp + 32)
			num = MAX;
		if (g.score[x][y] < num)
		{
			num--;
			g.score[x][y] = num;
		}
		y++;
	}
	return (g);
}

t_game	assign_up(t_game g, int	sc, int x)
{
	int	num;
	int	y;

	num = sc;
	y = g.y_opp;
	while (y >= 0)
	{
		if (g.map[x][y] == g.opp || g.map[x][y] == g.opp + 32)
			num = MAX;
		if (g.score[x][y] < num)
		{
			num--;
			g.score[x][y] = num;
		}
		y--;
	}
	g = assign_down(g, sc, x);
	return (g);
}

t_game	assign_row_left(t_game g)
{
	int	x;
	int	y;
	int	sc;

	x = g.x_opp;
	y = g.y_opp;
	sc = MAX;
	while (x >= 0)
	{
		if (g.map[x][y] == g.opp || g.map[x][y] == g.opp + 32)
			sc = MAX;
		if (g.score[x][y] < sc)
		{
			g.score[x][y] = sc;
			g = assign_up(g, sc, x);
			sc--;
		}
		x--;
	}
	return (g);
}

t_game	assign_row_right(t_game g)
{
	int	x;
	int	y;
	int	sc;

	x = g.x_opp;
	y = g.y_opp;
	sc = MAX;
	while (x < g.x_board)
	{
		if (g.map[x][y] == g.opp || g.map[x][y] == g.opp + 32)
			sc = MAX;
		if (g.score[x][y] < sc)
		{
			g.score[x][y] = sc;
			g = assign_up(g, sc, x);
			sc--;
		}
		x++;
	}
	return (g);
}
