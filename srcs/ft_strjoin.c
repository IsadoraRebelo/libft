/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 14:21:45 by ihering-       #+#    #+#                */
/*   Updated: 2019/10/29 16:42:54 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		len;

	fresh = 0;
	len = 0;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		fresh = (char *)malloc(sizeof(*fresh) * (len + 1));
		if (fresh == NULL)
			return (NULL);
		ft_strcpy(fresh, s1);
		ft_strcat(fresh, s2);
	}
	return (fresh);
}
