/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:56:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/23 13:53:22 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	main(int argc, char **argv)
{
	char	**map;
	char	**size;
	char	*line;
	int		fd;
	int		ret;
	int		row;
	int		col;

	fd = open(argv[1], O_RDONLY);
	ret = get_next_line(fd, &line);
	size = ft_strsplit(line, ' ');
	row = ft_atoi(size[1]);
	col = ft_atoi(size[2]);
	*map = (char *)(malloc(row * sizeof(char *)));
	**map = (char)(malloc(col * sizeof(char)));
	ret = get_next_line(fd, &line);
	while (ret == 1)
	{
		ret = get_next_line(fd, &line);
		while (line[col] != '\0')
		{
			map[row][col] = line[col];
			ft_putchar(map[row][col]);
			col++;
		}
		ft_putchar('\n');
		col = 0;
		row++;
	}
	return (0);
}
