/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:27:25 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/11 12:26:46 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	check_pos(int p, char c1, char c2)
{
	if (p == 1)
	{
		if (c1 == '*' && (c2 == 'O' || c2 == 'o'))
			return (0);
		else if (c1 == '*' && (c2 == 'X' || c2 == 'x'))
			return (-1);
	}
	else if (p == 2)
	{
		if (c1 == '*' && (c2 == 'X' || c2 == 'x'))
			return (0);
		else if (c1 == '*' && (c2 == 'O' || c2 == 'o'))
			return (-1);
	}
	return (1);
}

int	check_piece_placement(t_game g, int x, int y)
{
	int	ix;
	int	iy;
	int	mx;
	int	my;
	int	count;

	ix = 0;
	count = 0;
	mx = g.x_placer + g.x_piece;
	my = g.y_placer + g.y_piece;
	while (x < mx)
	{
		iy = 0;
		while (y < my)
		{
			if (check_pos(g.player, g.piece[ix][iy], g.map[x][y]) == 0)
				count++;
			else if (check_pos(g.player, g.piece[ix][iy], g.map[x][y]) == -1)
				return (-1);
			iy++;
			y++;
		}
		x++;
		ix++;
		y = g.y_placer;
	}
	if (count > 1)
		return (-1);
	return (1);
}

int	check_map_validity(t_game g, int x, int y)
{
	int	mx;
	int	my;

	mx = g.x_placer + g.x_piece;
	my = g.y_placer + g.y_piece;
	while (x < mx)
	{
		while (y < my)
		{
			if (g.map[x][y] == '\0')
				return (-1);
			y++;
		}
		x++;
		y = g.y_placer;
	}
	if (check_piece_placement(g, g.x_placer, g.y_placer) == -1)
		return (-1);
	return (1);
}

int	check_validity(t_game g)
{
	if (check_map_validity(g, g.x_placer, g.y_placer) == -1)
		return (-1);
	return (1);
}
