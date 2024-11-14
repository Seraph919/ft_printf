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

void	ft_putnbr_fd(int nb, int fd, int *nbr)
{
	long		i;
	long		n;

	i = 1;
	n = nb;
	if (n < 0)
	{
		ft_putchar_fd('-', fd, nbr);
		n *= -1;
	}
	if (n == 0)
	{
		ft_putchar_fd('0', fd, nbr);
		return ;
	}
	while (i * 10 <= n)
	{
		i *= 10;
	}
	while (i > 0)
	{
		ft_putchar_fd((n / i) + '0', fd, nbr);
		n %= i;
		i /= 10;
	}
}
