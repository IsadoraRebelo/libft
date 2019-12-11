/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnlen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <ihering-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/11 10:53:55 by ihering-       #+#    #+#                */
/*   Updated: 2019/12/11 10:53:59 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strnlen(char *str, int i, char c)
{
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	return (i);
}
