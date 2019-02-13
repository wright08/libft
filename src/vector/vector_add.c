/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:40:34 by rwright           #+#    #+#             */
/*   Updated: 2019/02/12 16:40:10 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	*vector_add(t_vector *v, void *item)
{
	if (v->capacity == v->total && !vector_resize(v))
		return (NULL);
	v->items[v->total++] = item;
	return (v);
}
