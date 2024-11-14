/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:14:53 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 16:05:18 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	int		count;
	va_list	args;

	if (!form)
		return (0);
	va_start(args, form);
	count = 0;
	while (*form)
	{
		if (*form == '%')
			form = formats(form, args, &count);
		else
		{
			ft_putchar_fd(*form, 1, &count);
			form++;
		}
	}
	return (count);
}
