/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:56:13 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/24 09:47:58 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	main(int argc, char **argv)
{
	char	*line;
	char	*map[100];
	int		count;
	int		fd;
	int		ret;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY, 0700);
		count = 0;
		while ((ret = get_next_line(fd, &line)) == 1)
		{
			map[count] = ft_strnew(0);
			map[count] = ft_strjoin(map[count], line);
			ft_putendl(map[count]);
			count++;
		}
	}
	else
		ft_putendl("Invalid number of arguments.");
	return (0);
}
