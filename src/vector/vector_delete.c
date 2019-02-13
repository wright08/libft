/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:13:27 by rwright           #+#    #+#             */
/*   Updated: 2019/02/12 16:41:02 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

void	vector_delete(t_vector *v, int index)
{
	int i;

	if (index >=  0 && index < v->total)
	{
		v->items[index] = NULL;
		while (i < v->total - 1)
		{
			v->items[i] = v->items[i + 1];
			i++;
		}
		v->items[i] = NULL;
		v->total--;
		if (v->total > 0 && v->total == v->capacity / 4)
			vector_resize(v);
	}
}
