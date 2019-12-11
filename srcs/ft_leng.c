/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_leng.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/25 11:09:42 by ihering-       #+#    #+#                */
/*   Updated: 2019/12/10 15:29:45 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_leng(int n)
{
	int len;

	len = 1;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	len = len - 1;
	return (len);
}
