/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 12:03:58 by ihering-      #+#    #+#                 */
/*   Updated: 2019/01/20 11:53:56 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*s11 != *s22)
			return (*s11 - *s22);
		s11++;
		s22++;
		n--;
	}
	return (0);
}
