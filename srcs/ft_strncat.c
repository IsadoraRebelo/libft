/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 11:42:25 by ihering-       #+#    #+#                */
/*   Updated: 2019/07/01 10:10:29 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t leng)
{
	char *s11;
	char *s22;

	s11 = s1;
	s22 = (char*)s2;
	while (*s11 != '\0')
		s11++;
	while (*s22 != '\0' && leng > 0)
	{
		*s11 = *s22;
		s11++;
		s22++;
		leng--;
	}
	*s11 = '\0';
	return (s1);
}
