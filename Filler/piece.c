/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 06:36:52 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/04 06:42:38 by cshirley         ###   ########.fr       */
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

int		check_x_diff_one(t_game g, int xp, int yp)
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
			if (g.piece[ix][iy] == '*' && (g.map[xp][yp] == 'O' || g.map[xp][yp] == 'o'))
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

/*int		check_x_diff_two(t_game g, int xp, int yp)
{
}

int		check_map_validity(t_game g, int x, int y)
{
}

int		check_count_validity(t_game g, int x, int y)
{
}
*/
