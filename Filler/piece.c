/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 06:36:52 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/11 12:45:40 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	store_piece(t_game g, char *line)
{
	int		index;

	index = 0;
	g.piece = (char**)(malloc(g.x_piece + 1 * sizeof(char*)));
	while (index < g.x_piece)
	{
		g.piece[index] = (char*)(malloc(g.y_piece * sizeof(char)));
		index++;
	}
	index = 0;
	while (index < g.x_piece)
	{
		get_next_line(0, &line);
		g.piece[index] = ft_strjoin(g.piece[index], line);
		index++;
	}
	return (g);
}

t_game	find_placement_one(t_game g, int xp, int yp)
{
	int	mx;
	int	my;
	int	ix;
	int	iy;

	mx = g.x_placer + g.x_piece;
	my = g.y_placer + g.y_piece;
	ix = g.x_piece - 1;
	while (xp < mx)
	{
		iy = g.y_piece - 1;
		while (yp < my)
		{
			if (g.piece[ix][iy] == '*' && (g.map[xp][yp] == 'O' || g.map[xp][yp] == 'o'))
			{
				g.y_placer = g.y_placer - iy;
				g.x_placer = g.x_placer - ix;
				return (g);
			}
			iy--;
			yp++;
		}
		yp = g.y_placer;
		ix--;
		xp++;
	}
	return (g);
}

t_game	find_placement_two(t_game g, int xp, int yp)
{
	int	mx;
	int	my;
	int	ix;
	int	iy;

	mx = g.x_placer + g.x_piece;
	my = g.y_placer + g.y_piece;
	ix = g.x_piece - 1;
	while (ix < mx)
	{
		iy = g.y_piece - 1;
		while (iy < my)
		{
			if (g.piece[ix][iy] == '*' && (g.map[xp][yp] == 'X' || g.map[xp][yp] == 'x'))
			{
				g.y_placer = g.y_placer - iy;
				g.x_placer = g.x_placer - ix;
				return (g);
			}
			iy++;
			yp++;
		}
		yp = g.y_placer;
		ix--;
		xp++;
	}
	return (g);
}
