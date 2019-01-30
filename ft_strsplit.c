/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 10:49:26 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 14:05:15 by rwright          ###   ########.fr       */
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

int		set_next_word(char **word, const char *s, char c)
{
	static int	offset = 0;
	int			word_len;

	while (s[offset] == c)
		offset++;
	if (s[offset])
	{
		word_len = len_word(s + offset, c);
		if (!((*word) = ft_strnew(word_len + 1)))
			return (0);
		ft_strncpy((*word), s + offset, word_len);
		offset += word_len;
	}
	return (1);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**ret;
	int		word_count;
	int		i;

	word_count = count_words(s, c);
	if (!(ret = malloc(sizeof(size_t) * (word_count + 1))))
		return (free_all(ret, 0));
	i = 0;
	while (i < word_count)
	{
		if (!set_next_word(ret + i, s, c))
			return (free_all(ret, i));
		i++;
	}
	ret[i] = 0;
	return (ret);
}
