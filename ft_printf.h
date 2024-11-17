/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:15:28 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/17 21:19:23 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(const char *form, ...);
int			ft_putchar_fd(char c, int fd, int *n);
int			ft_putstr_fd(char *s, int fd, int *n);
int			ft_putnbr_fd(int nb, int fd, int *n);
int			p_memory(void *ad, int *n);
const char	*formats(const char *form, va_list args, int *n, int *err);
int			p_hexa(unsigned int s, int *n);
int			upper_hexa(unsigned int s, int *n);
int			unsigned_int(unsigned int nb, int *n);
int			check_char(char c);

#endif