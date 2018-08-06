/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 06:58:05 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/10 11:39:30 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			index;

	str = (unsigned char*)s;
	index = 0;
	while (index < n)
	{
		if (str[index] == (unsigned char)c)
			return (&str[index]);
		index++;
	}
	return (NULL);
}
