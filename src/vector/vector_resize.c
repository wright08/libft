/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:39:53 by rwright           #+#    #+#             */
/*   Updated: 2019/02/11 21:39:54 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector *vector_resize(t_vector *vec, int size)
{
	void **items;

	if ((items = malloc(sizeof(size_t) * size)))
	{
		while (size--)
			items[size] = vec->items[size];
		vec->items = items;
		vec->capacity = capacity;
	}
}
