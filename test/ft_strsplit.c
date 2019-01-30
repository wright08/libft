/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 10:49:26 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 11:23:29 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		count_words(const char *s, char c)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

int		len_word(const char *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

void	*free_all(char **arr, int words)
{
	while (words--)
		free(arr[words]);
	free(arr);
	return (NULL);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**ret;
	int		word_count;
	int		word_len;
	int		scan;
	int		i;

	word_count = count_words(s, c);
	if (!(ret = malloc(sizeof(size_t) * (word_count + 1))))
		return (free_all(ret, 0));
	i = 0;
	scan = 0;
	while (i < word_count)
	{
		while (s[scan] == c)
			scan++;
		if (s[scan])
		{
			word_len = len_word(s[scan], c);
			if (!(ret[i] = ft_strnew(word_len + 1)))
				return (free_all(i));
			ret[i] = ft_strncpy(ret[i], s + scan, word_len);
		}
		scan += word_len;
		i++;
	}
	if (!(arr[i] = ft_strnew(1)))
		return (free_all(ret, word_count);
	return (0);
}
