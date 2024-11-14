/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_memory.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:36:26 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 16:04:40 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	splitting_f(char *adress, char *hex, size_t n, int *nb)
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
		ft_putchar_fd(adress[i], 1, nb);
}

void	p_memory(void *ad, int *nb)
{
	size_t	n;
	char	*hex;
	char	*adress;

	adress = malloc(18);
	if (!adress)
		return ;
	hex = "0123456789abcdef";
	n = (size_t)ad;
	ft_putstr_fd("0x", 1, nb);
	if (n == 0)
	{
		write(1, "0", 1);
		*nb += 1;
	}
	else
	{
		splitting_f(adress, hex, n, nb);
	}
	free(adress);
}
