/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 16:01:15 by ihering-      #+#    #+#                 */
/*   Updated: 2019/01/17 10:29:59 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
