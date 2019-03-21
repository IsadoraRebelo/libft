/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/23 10:11:54 by ihering-      #+#    #+#                 */
/*   Updated: 2019/01/23 12:59:01 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(char const *s, char c)
{
	int x;
	int count;

	x = 0;
	count = 0;
	while (*s != '\0')
	{
		if (x == 1 && *s == c)
			x = 0;
		if (x == 0 && *s != c)
		{
			x = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int		ft_lenw(char const *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**st;
	int		nbw;
	int		i;

	nbw = 0;
	st = 0;
	i = 0;
	if (!s)
		return (0);
	nbw = ft_words((const char *)s, c);
	st = (char**)malloc(sizeof(*st) * (ft_words((const char *)s, c) + 1));
	if (st == NULL)
		return (NULL);
	while (nbw--)
	{
		while (*s == c && *s != '\0')
			s++;
		st[i] = ft_strsub((const char *)s, 0, ft_lenw((const char *)s, c));
		if (st[i] == NULL)
			return (NULL);
		s = s + ft_lenw(s, c);
		i++;
	}
	st[i] = NULL;
	return (st);
}
