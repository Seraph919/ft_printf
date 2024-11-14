/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:41:06 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 21:42:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	fireforce(char *adress)
{
	free(adress);
}

static void	while_loop(char *reversed, char *hexa, unsigned int s, int *i)
{
	while (s > 0)
	{
		reversed[*i] = hexa[s % 16];
		s /= 16;
		*i += 1;
	}
}

int	upper_hexa(unsigned int s, int *n)
{
	char	*hexa;
	char	*reversed;
	int		i;

	if (s == 0)
	{
		if (ft_putstr_fd("0", 1, n) == -1)
			return (-1);
	}
	hexa = "0123456789ABCDEF";
	reversed = malloc(9);
	if (!reversed)
		return (-1);
	i = 0;
	while_loop(reversed, hexa, s, &i);
	reversed[i] = '\0';
	while (i)
		if (ft_putchar_fd(reversed[--i], 1, n) == -1)
			return (fireforce(reversed), -1);
	free(reversed);
	return (1);
}
