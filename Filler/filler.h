/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:29:59 by cshirley          #+#    #+#             */
/*   Updated: 2018/09/27 12:47:10 by cshirley         ###   ########.fr       */
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
	int				no_moves;
	int				destroy;
	int				x_bound;
	int				y_bound;
	int				x_piece;
	int				y_piece;
	int				x_board;
	int				y_board;
	int				x_placer;
	int				y_placer;
	int				x_opp;
	int				y_opp;
}					t_game;

int		check_valid(t_game g, int x, int y);
int		check_bounds(t_game g, int x, int y);
int		check_placement(t_game g, int x, int y);
int		move_placement(t_game *g);
void	place_piece(t_game g);
t_game	get_player(t_game g, char *line);
t_game	get_map(t_game g, char *line);
t_game	store_map(t_game g, char *line);
t_game	store_piece(t_game g, char *line);
t_game	find_opp(t_game g);
t_game	make_scores(t_game g);
t_game	make_bounds(t_game g);
t_game	alloc_score(t_game g);
t_game	assign_row_left(t_game g);
t_game	assign_row_right(t_game g);
t_game	assign_up(t_game g, int sc, int x);
t_game	assign_down(t_game g, int sc, int x);

#endif
