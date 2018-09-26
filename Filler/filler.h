/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:29:59 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/22 11:02:34 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define MAX 100
# include "./libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_game
{
	char			**map;
	char			**piece;
	char			player;
	char			opp;
	int				**score;
	int				i;
	int				x_bound;
	int				y_bound;
	int				x_opp;
	int				y_opp;
	int				x_piece;
	int				y_piece;
	int				x_board;
	int				y_board;
	int				x_placer;
	int				y_placer;
}					t_game;

int		check_valid(t_game g);
int		check_bounds(t_game g);
int		check_placement(t_game g);
int		is_placement(t_game g, int x, int y);
int		find_x_coord(t_game g);
int		find_y_coord(t_game g);
void	place_piece(t_game g);
t_game	get_player(t_game g, char *line);
t_game	get_map(t_game g, char *line);
t_game	store_map(t_game g, char *line);
t_game	store_piece(t_game g, char *line);
t_game	find_pos(t_game g);
t_game	find_best_pos(t_game g);
t_game	make_scores(t_game g);
t_game	make_bounds(t_game g);
t_game	alloc_score(t_game g);

#endif
