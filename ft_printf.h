/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:15:28 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/13 23:06:46 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int         ft_printf(const char *form, ...);
void	    ft_putchar_fd(char c, int fd);
void	    ft_putstr_fd(char *s, int fd);
void	    ft_putnbr_fd(int nb, int fd);
void        p_memory(void *ad);
const char  *formats(const char *form, va_list args);
void        p_hexa(int s);
void        upper_hexa(int s);
void        unsigned_int(unsigned int nb);

#endif