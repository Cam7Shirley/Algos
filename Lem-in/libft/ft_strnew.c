/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:06:30 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/30 15:06:33 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char *str;

	str = (char*)malloc(n * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, n + 1);
	return (str);
}
