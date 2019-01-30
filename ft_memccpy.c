/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:20:43 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 11:09:33 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((t_byte *)dst)[i] = ((t_byte *)src)[i];
		if (((t_byte *)dst)[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
