/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:20:43 by rwright           #+#    #+#             */
/*   Updated: 2019/02/10 20:48:18 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_byte			*dst_byte;
	const t_byte	*src_byte;
	size_t			i;

	i = 0;
	dst_byte = dst;
	src_byte = src;
	while (i < n)
	{
		dst_byte[i] = src_byte[i];
		if (dst_byte[i++] == (t_byte)c)
			return (dst_byte + i);
	}
	return (NULL);
}
