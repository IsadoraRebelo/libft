/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 14:47:57 by ihering-      #+#    #+#                 */
/*   Updated: 2019/01/19 17:42:24 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t f;

	i = 0;
	f = 0;
	if (s)
	{
		f = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (s[i] == '\0')
			return (ft_strnew(0));
		while (s[f] == ' ' || s[f] == '\n' || s[f] == '\t')
			f--;
	}
	return (ft_strsub(s, i, f - i + 1));
}
