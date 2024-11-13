/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:14:53 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/13 14:24:26 by asoudani         ###   ########.fr       */
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
        if ((*form))
            ft_putchar_fd(*form, 1);
        form++;
    }
    return 0;
}
int main()
{
    // char s = NULL;
    int d = 6737;
    // ft_printf("%c\n", s);
    // printf("%c", s);
    ft_printf("\nft_printf :\nNumber example :%d\nusing double pers %%\nexample of char : %c\nString example: %s\nexample of address : %p\n", d, 97,"T-flow", &d);
    ft_printf("hexa example : %x\nHEXA example : %X\nunsigned int example : %u\n", 2147483647, 2147483647, 4294967295);
    printf("\nprintf :\nNumber example :%d\nusing double pers %%\nexample of char : %c\nString example: %s\nexample of address : %p\n", d, 97,"T-flow", &d);
    printf("hexa example : %x\nHEXA example : %X\nunsigned int example : %u\n", 2147483647, 2147483647, 4294967295);
}