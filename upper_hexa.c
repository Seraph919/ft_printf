/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:41:06 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/13 14:10:43 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void upper_hexa(int s)
{
    char        *HEXA;
    char    *reversed;
    int             i;
    
    if (s == 0)
    {
        ft_putstr_fd("0", 1);
        return ;
    }
    HEXA = "0123456789ABCDEF";
    reversed = malloc(9);
    i = 0;
    if (!reversed)
        return ;
    while (s > 0)
    {
        reversed[i] = HEXA[s % 16];
        s /= 16;
        i++;
    }
    while (i)
        ft_putchar_fd(reversed[--i],1);
}
