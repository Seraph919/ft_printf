/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_memory.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:36:26 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/12 20:42:45 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    p_memory(void *ad)
{
    size_t      n;
    int         i;
    char        *hex;
    char        *adress;
    //if (!ad)
    //     return (ft_putstr_fd("(nil)", 1));

    adress = malloc(18);
    if (!adress)
        return ;
    hex = "0123456789abcdef";
    n = (size_t) ad;
    i = 1;
    ft_putstr_fd("0x", 1);
    while (n > 0)
    {
        adress[i] = hex[n%16];
        n /= 16;
        i++;
    }
    while (--i)
    {
        ft_putchar_fd(adress[i], 1);
    }
}
