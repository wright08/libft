/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:25:25 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 16:57:29 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	if (dst == src)
		return (dst);
	else if (dst > src)
		return (ft_memcpy(dst, src, n));
	i = 0;
	while (i < n)
	{
		((t_byte *)dst)[i] = ((const t_byte *)src)[i];
		i++;
	}
	return (dst);
}
