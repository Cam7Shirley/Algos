/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:29:59 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/04 06:42:24 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "./libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_token
{
	char			**piece;
	unsigned int	x;
	unsigned int	y;
}					t_token;

typedef struct		s_game
{
	char			**map;
	char			**piece;
	int				i;
	int				player;
	int				x_piece;
	int				y_piece;
	int				x_board;
	int				y_board;
	int				x_placer;
	int				y_placer;
}					t_game;

int		check_map_validity(t_game g, int x, int y);
//int		check_count_validity(t_game g, int x, int y);
int		find_x_coord(t_game g);
int		find_y_coord(t_game g);
int		check_x_diff_one(t_game g, int xp, int yp);
//int		check_x_diff_two(t_game g, int xp, int yp);
void	more_validity(t_game g, int *x, int *y, int *c);
void	place_piece(t_game g);
t_game	play_game(t_game g, char *line);
t_game	get_player(t_game g, char *line);
t_game	get_map(t_game g, char *line);
t_game	store_map(t_game g, char *line);
t_game	store_piece(t_game g, char *line);
t_game	find_shape(t_game g);

#endif
