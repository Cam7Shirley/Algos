/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:06:54 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 12:59:16 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	make_scores(t_game g)
{
	g = assign_row_left(g);
	g = assign_row_right(g);
	return (g);
}

t_game	get_map(t_game g, char *line)
{
	int		index;
	char	**temp;

	index = 0;
	while (1)
	{
		get_next_line(0, &line);
		if (line[0] == 'P')
		{
			temp = ft_strsplit(line, ' ');
			g.x_piece = ft_atoi(temp[1]);
			g.y_piece = ft_atoi(temp[2]);
			break ;
		}
		if (index < g.x_board)
		{
			g.map[index] = ft_strjoin(g.map[index], &line[4]);
			index++;
		}
		else
			break ;
	}
	return (g);
}

t_game	store_map(t_game g, char *line)
{
	char	**temp;
	int		index;

	index = 0;
	get_next_line(0, &line);
	if (line[0] == 'P' && ft_strstr(line, "Plateau"))
	{
		temp = ft_strsplit(line, ' ');
		g.x_board = ft_atoi(temp[1]);
		g.y_board = ft_atoi(temp[2]);
	}
	get_next_line(0, &line);
	g.map = (char**)(malloc(g.x_board * sizeof(char *)));
	while (index < g.x_board)
	{
		g.map[index] = (char*)(malloc(g.y_board * sizeof(char)));
		index++;
	}
	g = get_map(g, line);
	return (g);
}
