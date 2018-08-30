/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 06:49:51 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/09 10:37:00 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*one;

	one = *alst;
	if (alst != NULL && *alst != NULL)
	{
		del(one->content, one->content_size);
		free(one);
		*alst = NULL;
	}
}
