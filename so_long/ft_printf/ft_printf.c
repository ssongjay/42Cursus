/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:03:38 by injsong           #+#    #+#             */
/*   Updated: 2023/05/02 16:44:47 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percent(void)
{
	int	tmp;

	tmp = write(1, "%", 1);
	if (tmp == -1)
		return (-1);
	return (1);
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
		len += ft_print_addr(va_arg(ap, unsigned long long));
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		len;
	int		tmp;

	len = 0;
	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
			tmp = ft_formats(s, ap, ++i);
		else
			tmp = ft_putchar(s[i]);
		if (tmp == -1)
		{
			va_end(ap);
			return (-1);
		}
		len += tmp;
		i++;
	}
	va_end(ap);
	return (len);
}
