/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:23:20 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/14 18:57:49 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*formats(const char *form, va_list args, int *n, int *err)
{
	if (*(form + 1) == 'd' || *(form + 1) == 'i')
		*err = ft_putnbr_fd(va_arg(args, int), 1, n);
	else if (*(form + 1) == 's')
		*err = ft_putstr_fd(va_arg(args, char *), 1, n);
	else if (*(form + 1) == 'p')
		*err = p_memory(va_arg(args, void *), n);
	else if (*(form + 1) == 'x')
		*err = p_hexa(va_arg(args, int), n);
	else if (*(form + 1) == 'u')
		*err = unsigned_int(va_arg(args, unsigned int), n);
	else if (*(form + 1) == 'X')
		*err = upper_hexa(va_arg(args, int), n);
	else if (*(form + 1) == '%')
		*err = ft_putchar_fd('%', 1, n);
	else if (*(form + 1) == 'c')
		*err = ft_putchar_fd(va_arg(args, int), 1, n);
	else if (*(form + 1) == '\0')
		return (form);
	form += 2;
	return (form);
}
