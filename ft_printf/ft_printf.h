/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:03:40 by injsong           #+#    #+#             */
/*   Updated: 2023/04/30 16:15:45 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_print_percent(void);
int		ft_putnbr_u(unsigned int n);

int		ft_print_addr(unsigned long long n);
void	ft_put_hex(unsigned long long n, char *base);
int		ft_print_hex(unsigned long long n, char format);
int		ft_formats(const char *s, va_list ap, int i);

#endif
