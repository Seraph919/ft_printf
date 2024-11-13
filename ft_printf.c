/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:14:53 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/12 20:43:29 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *form, ...)
{
    va_list args;

    if (!form)
        return (ft_putchar_fd(0,1), 0);
    va_start(args, form);
    while (*form)
    {
        if (*form == '%')
            form = formats(form, args);
        else
        ft_putchar_fd(*form, 1);
        form++;
    }
    return 0;
}
int main()
{
    char *s = NULL;
    int min = -2147483648;

    ft_printf("%d", min);
    printf("\n");
   // printf("cspdiuxX%");
    // ft_printf("\nft_printf :\nNumber example :%d\nusing double pers %%\nexample of char : %c\nString example: %s\nexample of address : %p", d, 97,"T-flow", &d);
    // ft_printf("hexa example : %x\nHEXA example : %X\n", 2147483647, 2147483647);
    // printf("\nprintf :\nNumber example :%d\nusing double pers %%\nexample of char : %c\nString example: %s\nexample of address : %p\n", d, 97,"T-flow", &d);
    // printf("hexa example : %x\nHEXA example : %X\n", 2147483647, 2147483647);
}