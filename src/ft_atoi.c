/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:25:23 by rwright           #+#    #+#             */
/*   Updated: 2019/02/10 21:07:43 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int		ft_atoi(const char *str)
{
	long	n;
	int		neg;

	n = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if ((neg = *str == '-') || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		n = n * 10 + *str++ - '0';
		if (n - 1 > INT_MAX)
			return (neg ? 0 : -1);
	}
	return ((int)(neg ? -n : n));
}
