/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:40:34 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 21:09:46 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	*vector_add(t_vector *v, void *item)
{
	if (v->capacity == v->size && !vector_resize(v, v->capacity * 2))
		return (NULL);
	v->items[v->size] = item;
	v->size++;
	return (v->items[v->size - 1]);
}
