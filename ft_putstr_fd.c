/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:30:35 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/13 23:19:55 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        ft_putstr_fd("(null)", fd);
    else
    {
        while (*s)
        {
            ft_putchar_fd(*s, fd);
            s++;
        }
    }
}
