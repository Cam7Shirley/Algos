/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 06:59:46 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/13 08:42:35 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	num;
	size_t	flag;

	num = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (flag == 1 && *s == c)
			flag = 0;
		if (flag == 0 && *s != c)
		{
			flag = 1;
			num++;
		}
		s++;
	}
	return (num);
}

static size_t	get_word_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static char		**do_splits(char **a, char const *s, char c, size_t w)
{
	size_t	index;

	index = 0;
	while (w--)
	{
		while (*s == c && *s != '\0')
			s++;
		a[index] = ft_strsub(s, 0, get_word_length(s, c));
		if (a[index] == NULL)
			return (NULL);
		s += get_word_length(s, c);
		index++;
	}
	a[index] = NULL;
	return (a);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (s != NULL)
	{
		words = count_words(s, c);
		arr = (char **)(malloc(sizeof(*arr) * (words + 1)));
		if (!arr)
			return (NULL);
		arr = do_splits(arr, s, c, words);
		return (arr);
	}
	else
		return (NULL);
}
