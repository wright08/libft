/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:40:48 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 21:11:10 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_space(int c)
{
	return (c == '\n' || c == '\t' || c == ' ');
}

char		*ft_strtrim(const char *s)
{
	char	*ret;
	int		start;
	int		end;

	start = 0;
	while (is_space(s[start]))
		start++;
	end = start;
	while (s[end + 1])
		end++;
	while (is_space(s[end]))
		end--;
	if (start == 0 && !is_space(s[end + 1]))
		return (ft_strdup(s));
	if ((ret = malloc(end - start + 2)))
	{
		ft_memcpy(ret, s + start, end - start + 1);
		ret[end - start + 1] = '\0';
	}
	return (ret);
}
