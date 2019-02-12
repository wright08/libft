/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:05:52 by rwright           #+#    #+#             */
/*   Updated: 2019/02/11 21:25:36 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# define VECTOR_INIT_CAPACITY 4

struct	s_vector
{
	void	**items;
	int		capacity;
	int		total;
};

typedef s_vector	t_vector;

t_vector	*vector_init(t_vector *vec);
t_vector	*vector_resize(t_vector *vec, int size);
void		vector_add(t_vector *vec, void *item);
void		vector_set(t_vector *vec, int index, void *item);
void		vector_delete(t_vector *vec, int index);
void		vector_free(t_vector *vec);

void	*vector_get(t_vector *vec, int index);
char	*vector_get_char(t_vector *vec, int index); 
int		*vector_get_int(t_vector *vec, int index);

#endif
