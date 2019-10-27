/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/24 10:06:00 by ihering-       #+#    #+#                */
/*   Updated: 2019/07/01 10:14:17 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;

	new = *alst;
	while (new)
	{
		new = new->next;
		ft_lstdelone(alst, del);
		*alst = new;
	}
}
