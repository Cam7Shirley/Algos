/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 07:19:24 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/11 07:04:03 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if ((list = ft_memalloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((list->content = ft_memalloc(list->content_size)) == NULL)
		return (NULL);
	if (content == NULL)
	{
		list->content_size = 0;
		list->content = NULL;
	}
	else
	{
		list->content_size = content_size;
		ft_memcpy(list->content, content, list->content_size);
	}
	list->next = NULL;
	return (list);
}
