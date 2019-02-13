/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:39:53 by rwright           #+#    #+#             */
/*   Updated: 2019/02/12 16:42:40 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

t_vector *vector_resize(t_vector *v)
{
	void	**items;
	int		target;

	target = v->capacity * 2;
	while (target != v->capacity && !(items = malloc(target * sizeof(size_t))))
		target = (v->capacity + target) / 2;
	if (!items)
		return (NULL);
	while ((v->capacity)--)
		items[v->capacity] = (v->items)[v->capacity];
	free(v->items);
	v->items = items;
	v->capacity = target;
	return (v);
}
