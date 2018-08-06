/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:28:28 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/11 06:49:22 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim(char *temp, char const *s, size_t f, size_t b)
{
	size_t	index;

	index = 0;
	while (f < b)
	{
		temp[index] = s[f];
		f++;
		index++;
	}
	return (temp);
}

char		*ft_strtrim(char const *s)
{
	size_t	front;
	size_t	back;
	size_t	size;
	char	*temp;

	if (s != NULL)
	{
		front = 0;
		back = ft_strlen(s);
		while (s[front] == '\n' || s[front] == '\t' || s[front] == ' ')
			front++;
		while (s[back - 1] == '\n' || s[back - 1] == '\t' || s[back - 1] == ' ')
			back--;
		if (front > back)
			return (ft_strnew(1));
		if (s[front] == '\0')
			return (ft_strnew(1));
		size = back - front;
		if ((temp = ft_strnew(size)) == NULL)
			return (NULL);
		return (trim(temp, s, front, back));
	}
	else
		return ((char*)s);
}
