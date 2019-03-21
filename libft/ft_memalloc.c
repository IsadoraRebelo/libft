/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 10:36:39 by ihering-      #+#    #+#                 */
/*   Updated: 2019/01/19 17:28:41 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *i;

	i = malloc(size);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, size);
	return (i);
}
