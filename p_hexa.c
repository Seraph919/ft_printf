/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_hexa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:25:15 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/13 23:23:25 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void p_hexa(int s)
{
    char        *hexa;
    char    *reversed;
    int             i;
    
    if (s == 0)
    {
        ft_putstr_fd("0", 1);
        return ;
    }
    hexa = "0123456789abcdef";
    reversed = malloc(9);
    if (!reversed)
        return ;
    i = 0;
    while (s > 0)
    {
        reversed[i] = hexa[s % 16];
        s /= 16;
        i++;
    }
    reversed[i] = '\0';
    while (i)
        ft_putchar_fd(reversed[--i],1);
    free(reversed);
}
