/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 06:36:52 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/30 07:13:55 by cshirley         ###   ########.fr       */
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

int		check_x_diff(t_game g, int xp, int yp)
{
	int	mx;
	int	my;
	int	ix;
	int	iy;

	mx = g.x_placer + g.x_piece;
	my = g.y_placer + g.y_piece;
	ix = 0;
	while (xp < (mx - 1))
	{
		iy = 0;
		while (yp < (my - 1))
		{
			if (g.piece[ix][iy] == '*')
			{
				g.y_placer = g.y_placer - iy;
				return (g.x_placer - (xp - g.x_placer));
			}
			iy++;
			yp++;
		}
		yp = g.y_placer;
		xp++;
	}
	return (0);
}

int		check_valid(t_game g, int x, int y)
{
	int	ix;
	int	iy;
	int	mx;
	int	my;
	int	count;

	ix = 0;
	count = 0;
	mx = x + g.x_piece;
	my = y + g.y_piece;
	while (x < (mx - 1))
	{
		iy = 0;
		while (y < (my - 1))
		{
			if (g.player == 1)
			{
				if (g.piece[ix][iy] == '*' && (g.map[x][y] == '0' || g.map[x][y] == 'o'))
					count++;
			}
			else if (g.player == 2)
			{
				if (g.piece[ix][iy] == '*' && (g.map[x][y] == 'X' || g.map[x][y] == 'x'))
					count++;
			}
			iy++;
			y++;
		}
		y = g.y_placer;
		x++;
	}
	if (count != 1)
		return (0);
	return (1);
}
