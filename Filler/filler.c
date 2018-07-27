#include "filler.h"

int	get_player(char **m, char *p)
{
	char	*temp;
	char	*line;
	char	*play;
	int	player;
	int	index;

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
