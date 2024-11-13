/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:23:20 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/13 23:38:19 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char *formats(const char *form, va_list args)
{
    if (*(form + 1)  == 'd' || *(form + 1)  == 'i')
        ft_putnbr_fd(va_arg(args, int), 1);
    else if (*(form + 1)  == 's')
        ft_putstr_fd(va_arg(args, char *), 1);
    else if (*(form + 1)  == 'p')
         p_memory(va_arg(args, void *));
    else if (*(form + 1) == 'x') 
        p_hexa(va_arg(args, int));
    else if (*(form + 1) == 'u') 
        unsigned_int(va_arg(args, unsigned int));
    else if (*(form + 1)== 'X') 
        upper_hexa(va_arg(args, int));
    else if (*(form + 1)  == '%') 
        ft_putchar_fd('%', 1);
    else if (*(form + 1) == 'c') 
        ft_putchar_fd(va_arg(args, int ), 1);
    else if (*(form + 1) == '\0')
        return form;
    
    form += 2;
    return (form);
}
