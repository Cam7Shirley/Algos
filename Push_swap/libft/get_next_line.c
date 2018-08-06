/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:28:27 by cshirley          #+#    #+#             */
/*   Updated: 2018/07/06 13:58:14 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*take_bytes(const int fd, char *star, int *bytes)
{
	static char	readed[BUFF_SIZE + 1];
	char		*temp;

	*bytes = read(fd, readed, BUFF_SIZE);
	readed[*bytes] = '\0';
	if (!(temp = ft_strjoin(star, readed)))
		return (NULL);
	ft_memdel((void*)&star);
	return (temp);
}

int				finish(char **line, char **star)
{
	char	*temp;

	temp = ft_strdup(*star);
	if (!(*line = temp))
		return (-1);
	ft_memset(*star, 0, ft_strlen(temp));
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	int			bytes;
	char		*str;
	static char	*string = "";

	bytes = 1;
	if (fd < 0 || !line || (*string == '\0' && (!(string = ft_strnew(0)))))
		return (-1);
	while (bytes > 0)
	{
		if ((str = ft_strchr(string, '\n')))
		{
			*str = '\0';
			if (!(*line = ft_strdup(string)))
				return (-1);
			ft_memmove(string, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		if (!(string = take_bytes(fd, string, &bytes)))
			return (-1);
	}
	ft_strdel(&str);
	if (bytes == 0 && ft_strlen(string))
		bytes = finish(line, &string);
	return (bytes);
}
