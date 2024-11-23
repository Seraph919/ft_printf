/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:15:14 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 21:16:45 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_int(unsigned int nb, int *nbr)
{
	unsigned int	i;
	unsigned int	n;

	i = 1;
	n = nb;
	if (n == 0)
	{
		if (ft_putchar_fd('0', 1, nbr) == -1)
			return (-1);
		return (1);
	}
	while (i * 10 <= n)
	{
		i *= 10;
	}
	while (i > 0)
	{
		if (ft_putchar_fd((n / i) + '0', 1, nbr) == -1)
			return (-1);
		n %= i;
		i /= 10;
	}
	return (1);
}
