/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:29:54 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/11 06:46:18 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	index;
	char	*temp;

	if (s != NULL)
	{
		if (ft_strnew(ft_strlen(s)) == NULL)
			return (NULL);
		temp = ft_strnew(ft_strlen(s));
		index = 0;
		while (s[index] != '\0')
		{
			temp[index] = f(s[index]);
			index++;
		}
		return (temp);
	}
	else
		return ((char*)s);
}
