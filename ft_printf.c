/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:14:53 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 21:25:12 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	while_loop(const char *form, int *count, va_list args, int *err)
{
	while (*form)
	{
		if (*form == '%')
		{
			form = formats(form, args, count, err);
			if (*err == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar_fd(*form, 1, count) == -1)
			{
				va_end(args);
				return (-1);
			}
			form++;
		}
	}
	return (*count);
}

int	ft_printf(const char *form, ...)
{
	int		count;
	va_list	args;
	int		err;

	if (!form)
		return (0);
	va_start(args, form);
	count = 0;
	count = while_loop(form, &count, args, &err);
	if (err == -1)
		return (-1);
	va_end(args);
	return (count);
}
