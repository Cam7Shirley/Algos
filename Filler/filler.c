#include "filler.h"

int	get_player(char **m, char *p)
{
	char	*temp;
	char	*line;
	char	*play;
	int		player;
	int		index;

	index = 0;
	player = 0;
	temp = ft_strnew(ft_strlen(p));
	while (m[index])
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, m[index]);
		if (line[0] == '$')
		{
			if ((play = ft_strstr(line, "p1")) && (temp = ft_strstr(line, p)))
				player = 1;
			else if ((play = ft_strstr(line, "p2")) && (temp = ft_strstr(line, p)))
				player = 2;
		}
		if (player != 0)
			return (player);
		index++;
	}
	return (player);
}

int		get_row(char **m, int p)
{
}

int		get_col(char **m, int r, int p)
{
}

char	**fill_token(char **m, int x, int y, int i)
{
	char	**token;
	char	*line;
	int		indexx;
	int		indexy;

	indexx = 0;
	indexy = 0;
	while (indexx < x)
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, m[i]);
		while (indexy < y)
		{
			token[indexx][indexy] = line[indexy];
			indexy++;
		}
		token[indexx][indexy] = '\0';
		indexy = 0;
		i++;
		indexx++;
	}
	return (token);
}

char	**get_token(char **m)
{
	char	*line;
	char	**temp;
	char	**token;
	int		index;
	int		i;
	int		x;
	int		y;

	index = 0;
	i = 0;
	x = 0;
	y = 0;
	while (m[index])
	{
		line = ft_strnew(0);
		line = ft_strjoin(line, m[index]);
		if (line[0] == 'P' && (line = ft_strstr(line, "Piece")))
		{
			temp = ft_strsplit(line, ' ');
			x = ft_atoi(temp[1]);
			y = ft_atoi(temp[2]);
		}
		if (x == 0 && y == 0)
			index++;
		else
			break ;
	}
	index++;
	token = fill_token(m, x, y, index);
	return (token);
}
