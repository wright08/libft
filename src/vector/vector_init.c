/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:20:17 by rwright           #+#    #+#             */
/*   Updated: 2019/02/11 21:23:30 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector *vector_init(t_vector *vec)
{
	vec->capacity = VECTOR_INIT_CAPACITY;
	v->total = 0;
	if ((v->items = malloc(v->capacity * sizeof(size_t))))
		return (vec);
	return (NULL);
}
