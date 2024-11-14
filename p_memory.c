/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_memory.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:36:26 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 21:39:59 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	splitting_f(char *adress, char *hex, size_t n, int *nb)
{
	int	i;

	i = 1;
	while (n > 0)
	{
		adress[i] = hex[n % 16];
		n /= 16;
		i++;
	}
	while (--i)
		if (ft_putchar_fd(adress[i], 1, nb) == -1)
			return (-1);
	return (1);
}

static void	fireforce(char *adress)
{
	free(adress);
}

int	p_memory(void *ad, int *nb)
{
	size_t	n;
	char	*hex;
	char	*adress;

	adress = malloc(18 * sizeof(char));
	if (!adress)
		return (-1);
	hex = "0123456789abcdef";
	n = (size_t)ad;
	if (ft_putstr_fd("0x", 1, nb) == -1)
		return (fireforce(adress), -1);
	if (n == 0)
	{
		if (ft_putchar_fd('0', 1, nb) == -1)
			return (fireforce(adress), -1);
	}
	else
	{
		if (splitting_f(adress, hex, n, nb) == -1)
			return (fireforce(adress), -1);
	}
	free(adress);
	return (1);
}
