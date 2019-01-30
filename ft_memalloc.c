/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:00:46 by rwright           #+#    #+#             */
/*   Updated: 2019/01/30 11:07:31 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int		*ptr;

	if (!(ptr = malloc(size)))
		return (NULL);
	while (size--)
		ptr[size] = 0;
	return ((void *)ptr);
}
