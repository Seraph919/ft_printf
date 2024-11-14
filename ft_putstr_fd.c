/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:30:35 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 15:06:05 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *n)
{
	if (!s)
		ft_putstr_fd("(null)", fd, n);
	else
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd, n);
			s++;
		}
	}
}
