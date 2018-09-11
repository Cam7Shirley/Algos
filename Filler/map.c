/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:06:54 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/11 12:47:50 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_game	get_map(t_game g, char *line)
{
	int		index;
	char	**temp;

	index = 0;
	while (1)
	{
		get_next_line(0, &line);
		{
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

int		find_x_coord(t_game g)
{
	if (g.x_placer >= 0)
		return (g.x_placer);
	else
		return (-1);
}

int		find_y_coord(t_game g)
{
	if (g.y_placer >= 0)
		return (g.y_placer);
	else
		return (-1);
}
