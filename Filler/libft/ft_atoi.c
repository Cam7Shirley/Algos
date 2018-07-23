/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:57:50 by cshirley          #+#    #+#             */
/*   Updated: 2018/05/29 10:36:09 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkspaces(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	num;

	index = 0;
	sign = 1;
	num = 0;
	while (ft_checkspaces(str[index]) == 1)
		index++;
	if (str[index] == '-')
		sign = -1;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (str[index] != '\0' && ft_isdigit(str[index]) == 1)
	{
		num = num * 10 + (int)(str[index] - '0');
		index++;
	}
	return (sign * num);
}
