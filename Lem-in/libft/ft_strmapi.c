/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:34:26 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/11 06:51:49 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	index;
	char	*temp;

	if (s != NULL)
	{
		index = 0;
		if (ft_strnew(ft_strlen(s)) == NULL)
			return (NULL);
		temp = ft_strnew(ft_strlen(s));
		while (s[index] != '\0')
		{
			temp[index] = f(index, s[index]);
			index++;
		}
		return (temp);
	}
	else
		return ((char*)s);
}
