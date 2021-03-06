/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:02:56 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:40:11 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const uint8_t	*s1p;
	const uint8_t	*s2p;
	size_t			i;

	s1p = s1;
	s2p = s2;
	i = 0;
	while (i < n)
	{
		if (s1p[i] != s2p[i])
			return (s1p[i] - s2p[i]);
		i++;
	}
	return (0);
}
