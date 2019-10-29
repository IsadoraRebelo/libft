/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 11:39:51 by ihering-       #+#    #+#                */
/*   Updated: 2019/10/29 16:42:54 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*x;
	const unsigned char	*y;

	x = (unsigned char*)dst;
	y = (unsigned char*)src;
	if (y < x)
	{
		x += len;
		y += len;
		while (len > 0)
		{
			len--;
			x--;
			y--;
			*x = *y;
		}
	}
	else
		while (len > 0)
		{
			len--;
			*x++ = *y++;
		}
	return (dst);
}
