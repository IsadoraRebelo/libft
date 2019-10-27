/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 14:00:42 by ihering-       #+#    #+#                */
/*   Updated: 2019/07/01 10:10:14 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *len;

	len = NULL;
	while (*s)
	{
		if (*s == (char)c)
			len = (char*)s;
		s++;
	}
	if (!*s && c == '\0')
		len = (char*)s;
	return (len);
}
