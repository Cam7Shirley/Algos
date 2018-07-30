/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:56:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/30 09:52:47 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	main(int argc, char **argv)
{
	char	*line;
	char	*map[100];
	char	**token;
	int		row;
	int		col;
	int		count;
	int		index;
	int		fd;
	int		ret;
	int		player;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY, 0700);
		count = 0;
		index = 0;
		while ((ret = get_next_line(fd, &line)) == 1)
		{
			map[count] = ft_strnew(0);
			map[count] = ft_strjoin(map[count], line);
			count++;
		}
		player = get_player(map, "abanlin");
		token = get_token(map);
		row = get_row(map, player);
		col = get_col(map, row, player);
		ft_putchar('\n');
	}
	else
		ft_putendl("Invalid number of arguments.");
	return (0);
}
