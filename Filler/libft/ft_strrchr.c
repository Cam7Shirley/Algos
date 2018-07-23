/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:33:58 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/24 13:42:44 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	size_t	index;

	index = 0;
	temp = NULL;
	if (c == '\0')
		return ((char*)&s[ft_strlen(s)]);
	while (s[index] != '\0')
	{
		if (s[index] == c)
			temp = (char*)&s[index];
		index++;
	}
	return (temp);
}
