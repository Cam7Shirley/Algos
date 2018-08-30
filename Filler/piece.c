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
	g.piece = (char**)(malloc(g.x_piece * sizeof(char*)));
	while (index < g.x_piece)
	{
		g.piece[index] = (char*)(malloc(g.y_piece * sizeof(char)));
		index++;
	}
	index = 0;
	while (1)
	{
		if (get_next_line(0, &line) > 0)
		{
			g.piece[index] = ft_strjoin(g.piece[index], line);
			index++;
		}
		else
			break ;
	}
	return (g);
}

int		more_validity(t_game g, int *x, int *y)
{
	int	count;

	count = 0;
	if (g.player == 1)
	{
		if ((g.piece[*x][*y] == 'O' || g.piece[*x][*y] == 'o') && count == 0)
			count++;
		else if ((g.piece[*x][*y] == 'O' || g.piece[*x][*y] == 'o') && count > 0)
			return (0);
		*y = *y + 1;
	}
	else if (g.player == 2)
	{
		if ((g.piece[*x][*y] == 'X' || g.piece[*x][*y] == 'x') && count == 0)
			count++;
		else if ((g.piece[*x][*y] == 'X' || g.piece[*x][*y] == 'x') && count > 0)
			return (0);
		*y = *y + 1;
	}
	return (1);
}

int		check_valid(t_game g)
{
	int	ix;
	int	iy;
	int	count;

	ix = 0;
	iy = 0;
	count = 0;
	while (ix < g.x_piece)
	{
		while (iy < g.y_piece)
		{
			if (more_validity(g, &ix, &iy) == 0)
				return (0);
		}
		iy = 0;
		ix++;
	}
	return (1);
}
