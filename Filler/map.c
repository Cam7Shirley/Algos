/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 08:03:20 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/20 10:28:46 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	**get_map(char **file, unsigned int x, int i)
{
	unsigned int	index;
	char			*line;
	char			**map = NULL;

	index = 0;
	map = (char**)(malloc(sizeof(*map) * x));
	while (file[i])
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, file[i]);
		if (index < x && ft_isdigit(line[0]))
		{
			map[index] = ft_strnew(0);
			map[index] = ft_strjoin(map[index], &line[4]);
			index++;
		}
		i++;
	}
	return (map);
}

token	store_map(char **file)
{
	token	map;
	char	*line;
	char	**temp;
	int		index;

	index = 0;
	while (file[index])
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, file[index]);
		if (line[0] == 'P' && ft_strstr(line, "Plateau"))
		{
			temp = ft_strsplit(line, ' ');
			map.x = ft_atoi(temp[1]);
			map.y = ft_atoi(temp[2]);
		}
		if (map.x != 0 && map.y != 0)
		{
			index += 2;
			break ;
		}
		index++;
	}
	map.piece = get_map(file, map.x, index);
	return (map);
}
