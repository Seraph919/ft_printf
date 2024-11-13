/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_hexa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:25:15 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/12 16:42:04 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void p_hexa(int s)
{
    char        *hexa;
    char    *reversed;
    int             i;
    
    hexa = "0123456789abcdef";
    reversed = malloc(9);
    i = 0;
    if (!reversed)
        return ;
    while (s > 0)
    {
        reversed[i] = hexa[s % 16];
        s /= 16;
        i++;
    }
    while (i)
        ft_putchar_fd(reversed[--i],1);
}