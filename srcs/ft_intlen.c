/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <ihering-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/11 11:00:36 by ihering-       #+#    #+#                */
/*   Updated: 2019/12/11 11:00:37 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_intlen(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len = 1;
		nb = nb * -1;
	}
	while (nb > 1)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
