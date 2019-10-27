/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 14:47:57 by ihering-       #+#    #+#                */
/*   Updated: 2019/07/01 10:10:04 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
