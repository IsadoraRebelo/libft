/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:47:58 by ihering-       #+#    #+#                */
/*   Updated: 2019/07/01 10:10:33 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	i = 0;
	fresh = 0;
	if (s && f)
	{
		fresh = ft_strdup((const char *)s);
		if (fresh == NULL)
			return (NULL);
		while (fresh[i] != '\0')
		{
			fresh[i] = f((unsigned char)i, fresh[i]);
			i++;
		}
	}
	return (fresh);
}
