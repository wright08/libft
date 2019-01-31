/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:46:48 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 16:49:44 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && haystack[i])
	{
		j = 0;
		while (j + i < n && needle[j] && needle[j] == haystack[i + j])
			j++;
		if (j + i < n && !needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
