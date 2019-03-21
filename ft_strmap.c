/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 16:17:00 by ihering-      #+#    #+#                 */
/*   Updated: 2019/01/20 16:15:08 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	i;

	i = 0;
	fresh = 0;
	if (s && f)
	{
		fresh = ft_strdup((const char*)s);
		if (fresh == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
