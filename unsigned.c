/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:15:14 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/13 23:31:11 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void unsigned_int(unsigned int nb)
{
    	unsigned long	i;
	unsigned long	n;

	i = 1;
	n = nb;

	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return ;
	}
	while (i * 10 <= n)
	{
		i *= 10;
	}
	while (i > 0)
	{
		ft_putchar_fd((n / i) + '0', 1);
		n %= i;
		i /= 10;
	}
}
