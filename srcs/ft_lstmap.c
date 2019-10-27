/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 10:58:15 by ihering-       #+#    #+#                */
/*   Updated: 2019/07/01 10:14:10 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *fresh;
	t_list *new;
	t_list *temp;

	if (!lst || !f)
		return (0);
	new = f(lst);
	if ((fresh = ft_lstnew(new->content, new->content_size)))
	{
		temp = fresh;
		lst = lst->next;
		while (lst)
		{
			new = f(lst);
			if (!(temp->next = ft_lstnew(new->content, new->content_size)))
				return (0);
			temp = temp->next;
			lst = lst->next;
		}
	}
	return (fresh);
}
