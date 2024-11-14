/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/27 16:14:42 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/27 16:14:42 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	double_while(long n, int *nbr)
{
	long	i;

	i = 1;
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

int	ft_putnbr_fd(int nb, int fd, int *nbr)
{
	long	i;
	long	n;

	i = 1;
	n = nb;
	if (n < 0)
	{
		if (ft_putchar_fd('-', fd, nbr) == -1)
			return (-1);
		n *= -1;
	}
	if (n == 0)
	{
		if (ft_putchar_fd('0', fd, nbr) == -1)
			return (-1);
		return (1);
	}
	if (double_while(n, nbr) == -1)
		return (-1);
	return (1);
}
