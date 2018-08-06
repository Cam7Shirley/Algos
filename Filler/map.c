/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 08:03:20 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/06 11:15:56 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

//char	*find_start_pos(char **m, char c)
//{
//}

void	get_x_y(char *l, unsigned int *x, unsigned int *y)
{
	char	**temp;

	temp = ft_strsplit(l, ' ');
	*x = ft_atoi(temp[1]);
	*y = ft_atoi(temp[2]);
}

void	store_piece(char *l, token *t, int *i)
{
	if ((l = ft_strstr(l, ".")) && ft_strlen(l) == t->y)
	{
		t->piece[*i] = ft_strnew(0);
		t->piece[*i] = ft_strjoin(t->piece[*i], l);
	}
	else if ((l = ft_strstr(l, "O")) && ft_strlen(l) == t->y)
	{
		t->piece[*i] = ft_strnew(0);
		t->piece[*i] = ft_strjoin(t->piece[*i], l);
	}
	else if ((l = ft_strstr(l, "X")) && ft_strlen(l) == t->y)
	{
		t->piece[*i] = ft_strnew(0);
		t->piece[*i] = ft_strjoin(t->piece[*i], l);
	}
	*i = *i + 1;
}

char	**store_map(char **file)
{
	int		index;
	int		map_index;
	char	*line;
	token	map;

	map = new_token(&map, 0, 0);
	map_index = 0;
	while (file[index])
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, file[index]);
		if (line[0] == 'P' && (line = ft_strstr(line, "Plateau")))
			get_x_y(line, &(map.x), &(map.y));
		store_piece(line, &map, &map_index);
		index++;
	}
	return (map.piece);
}

void	overwrite_prev(char c)
{
}
