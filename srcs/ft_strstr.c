/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 15:26:30 by ihering-       #+#    #+#                */
/*   Updated: 2019/10/29 16:42:54 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t z;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		z = 0;
		while (needle[z] == haystack[i + z])
		{
			if (needle[z + 1] == '\0')
				return ((char*)haystack + i);
			z++;
		}
		i++;
	}
	return (0);
}
