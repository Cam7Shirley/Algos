/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:33:44 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/08 10:16:36 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	unsigned int	tmp;
	size_t			index;
	char			*str;

	index = get_size(n);
	tmp = n;
	if (n < 0)
	{
		tmp = -1 * n;
		index++;
	}
	if (n == 0)
	{
		str = ft_strnew(1);
		str[0] = '0';
	}
	else if ((str = ft_strnew(index)) == NULL)
		return (NULL);
	str[--index] = tmp % 10 + 48;
	while (tmp /= 10)
		str[--index] = tmp % 10 + 48;
	if (n < 0)
		str[0] = '-';
	return (str);
}
