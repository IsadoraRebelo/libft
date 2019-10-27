/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 10:11:32 by ihering-       #+#    #+#                */
/*   Updated: 2019/07/01 10:10:17 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	if (*needle == 0)
		return ((char*)haystack);
	i = 0;
	while (*haystack != '\0' && i < len)
	{
		if (*haystack == *needle)
		{
			while (*(haystack + i) == *(needle + i) && len - i)
			{
				i++;
				if (*(needle + i) == '\0')
					return ((char*)haystack);
			}
		}
		len--;
		haystack++;
	}
	return (NULL);
}
