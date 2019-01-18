/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:10:03 by rwright           #+#    #+#             */
/*   Updated: 2019/01/18 13:16:17 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char *str_start;

	str_start = str;
	while (*str)
		str++;
	while (str >= str_start)
	{
		if (c == *str)
			return (str);
		str--;
	}
	return (NULL);
}
