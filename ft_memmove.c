/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:25:25 by rwright           #+#    #+#             */
/*   Updated: 2019/01/23 21:09:57 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	t_byte			*dp;
	const t_byte	*sp;
	size_t			i;

	if (dst == src)
		return (dst);
	else if (dst > src)
		return (ft_memcpy(dst, src, n));
	dp = dst;
	sp = src;
	i = 0;
	while (i < n)
	{
		dp[i] = sp[i];
		i++;
	}
	return (dst);
}
