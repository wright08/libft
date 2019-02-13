/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:53:35 by rwright           #+#    #+#             */
/*   Updated: 2019/02/12 16:41:13 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

t_vector *vector_init(int capacity)
{
	t_vector *new;

	if ((new = malloc(capacity * sizeof(size_t))))
	{
		new->capacity = capacity;
		new->total = 0;
	}
	return (new);
}
