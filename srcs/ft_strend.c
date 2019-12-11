/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strend.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <ihering-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/11 10:58:09 by ihering-       #+#    #+#                */
/*   Updated: 2019/12/11 11:05:04 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strend(char *res, int neg, int len)
{
	if (neg == 1)
	{
		res[len] = '-';
		len++;
	}
	res[len] = '\0';
	res = ft_strrev(res);
	return (res);
}
