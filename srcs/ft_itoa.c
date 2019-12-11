/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 12:24:04 by ihering-       #+#    #+#                */
/*   Updated: 2019/12/10 15:25:39 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char			*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*res;

	sign = 0;
	len = ft_intlen(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		sign = 1;
	res = ft_strnew(len);
	len = 0;
	if (!res)
		return (NULL);
	while (n / 10 != 0 || n % 10 != 0)
	{
		res[len] = ft_abs(n % 10) + '0';
		n /= 10;
		len++;
	}
	return (ft_strend(res, sign, len));
}
