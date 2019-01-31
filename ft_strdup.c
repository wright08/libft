/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:17:28 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 19:57:09 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		len;

	len = ft_strlen(str);
	if ((dup = malloc(ft_strlen(str) + 1)))
		dup = ft_memcpy(dup, str, len + 1);
	return (dup);
}
