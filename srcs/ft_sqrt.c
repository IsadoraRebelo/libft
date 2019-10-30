/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <ihering-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:05:20 by ihering-       #+#    #+#                */
/*   Updated: 2019/10/30 11:05:36 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sq;

	sq = 1;
	if (nb <= 0)
		return (0);
	while (sq * sq < nb)
		sq++;
	if (sq * sq == nb)
		return (sq);
	else
		return (0);
}
