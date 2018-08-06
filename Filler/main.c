/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:56:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/08/06 11:04:25 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	main(int argc, char **argv)
{
	char	*line;
	char	*file[100];
	char	**map;
	token	tkn;
	int		ix;
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
		ix = 0;
		while ((ret = get_next_line(fd, &line)) == 1)
		{
			file[count] = ft_strnew(0);
			file[count] = ft_strjoin(file[count], line);
			count++;
		}
		map = store_map(file);
		while (map[ix])
		{
			ft_putendl(map[ix]);
			ix++;
		}
		player = get_player(file, "abanlin");
		tkn = get_token(file);
		ft_putchar('\n');
	}
	else
		ft_putendl("Invalid number of arguments.");
	return (0);
}
