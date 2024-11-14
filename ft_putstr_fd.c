/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:30:35 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 21:16:31 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int *n)
{
	if (!s)
	{
		if (ft_putstr_fd("(null)", fd, n) == -1)
			return (-1);
	}
	else
	{
		while (*s)
		{
			if (ft_putchar_fd(*s, fd, n) == -1)
				return (-1);
			s++;
		}
	}
	return (1);
}
