/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 17:37:47 by ihering-       #+#    #+#                */
/*   Updated: 2019/10/29 16:42:54 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_memdup(void const *content, size_t content_size)
{
	void *temp;

	temp = malloc(sizeof(unsigned char) * content_size);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, content, content_size);
	return (temp);
}
