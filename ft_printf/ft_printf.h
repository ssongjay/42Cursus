/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:03:40 by injsong           #+#    #+#             */
/*   Updated: 2023/05/02 16:36:07 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_print_percent(void);
int		ft_formats(const char *s, va_list ap, int i);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_tmp(void);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);

int		ft_print_hex_tmp(unsigned int x, char format);
int		ft_print_hex(unsigned int x, char format);
int		ft_print_hex_tmp_long(unsigned long long p);
int		ft_print_addr_tmp(unsigned long long p);
int		ft_print_addr(unsigned long long n);

#endif
