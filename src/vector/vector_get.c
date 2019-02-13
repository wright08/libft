/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:12:07 by rwright           #+#    #+#             */
/*   Updated: 2019/02/12 16:36:19 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	*vector_get(t_vector *vec, int index)
{
	if (index >= 0 && index < vec->total)
		return (vec->items[index]);
	return (NULL);
}
