/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 19:29:37 by ihering-      #+#    #+#                 */
/*   Updated: 2019/01/19 19:31:05 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dest;

	len = 0;
	dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dest == NULL)
		return (0);
	while (s1[len] != '\0')
	{
		dest[len] = s1[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
