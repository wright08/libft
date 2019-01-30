/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:40:48 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 10:37:35 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s)
{
	char	*ret;
	int		start;
	int		end;

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	end = start;
	while (s[end + 1])
		end++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (start == 0 && s[end + 1] != '\n' && s[end + 1] != ' ' &&
			s[end + 1] != '\t')
	{
		ret = malloc(ft_strlen(s) + 1);
		return (ft_strcpy(ret, s));
	}
	if (!(ret = malloc(end - start + 2)))
		return (NULL);
	ret[end - start + 1] = '\0';
	return (ft_memcpy(ret, s + start, end - start + 1));
}
