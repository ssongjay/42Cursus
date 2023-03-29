/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:03:38 by injsong           #+#    #+#             */
/*   Updated: 2023/03/28 21:41:16 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_print_addr(unsigned long long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_print_hex(n, 'x');
	return (len);
}

int	ft_formats(const char *s, va_list ap, int i)
{
	int	len;

	len = 0;
	if (s[i] == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (s[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (s[i] == 'd')
		len += ft_putnbr(va_arg(ap, int));
	else if (s[i] == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (s[i] == 'u')
		len += ft_putnbr_u(va_arg(ap, unsigned int));
	else if (s[i] == '%')
		len += ft_print_percent();
	else if (s[i] == 'x')
		len += ft_print_hex(va_arg(ap, unsigned int), 'x');
	else if (s[i] == 'X')
		len += ft_print_hex(va_arg(ap, unsigned int), 'X');
	else if (s[i] == 'p')
		len += ft_print_addr(va_arg(ap, unsigned long));
	return (len);
}

void	ft_put_hex(unsigned long long n, char *base)
{
	if (n < 16)
		ft_putchar(base[n]);
	else if (n > 15)
	{
		ft_put_hex(n / 16, base);
		ft_put_hex(n % 16, base);
	}
	else
		ft_putchar(n + 48);
}

int	ft_print_hex(unsigned long long n, char format)
{
	char	*base_x;
	char	*base_xx;
	int		len;

	base_x = "0123456789abcdef";
	base_xx = "0123456789ABCDEF";
	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		if (format == 'x')
			ft_put_hex(n, base_x);
		if (format == 'X')
			ft_put_hex(n, base_xx);
	}
	while (n)
	{
		n /= 16;
		++len;
	}
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_formats(s, ap, ++i);
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
