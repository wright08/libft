/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <rwright@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:40:07 by rwright           #+#    #+#             */
/*   Updated: 2019/06/06 15:40:08 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
};
typedef struct s_list	t_list;

void	ft_lstadd(t_list **lst, t_list *new);
void	ft_lstdel(t_list **lst, void (*del)(void *, size_t));
void	ft_lstdelone(t_list **lst, void (*del)(void *, size_t));
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list*	ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list*	ft_lstnew(const void *content, size_t content_size);

#endif
