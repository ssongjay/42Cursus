/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:34:48 by injsong           #+#    #+#             */
/*   Updated: 2023/05/02 16:44:35 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_tmp(unsigned int x, char format)
{
	int	tmp;

	tmp = 0;
	if (x < 10)
		tmp = ft_putchar(x + '0');
	else
	{
		if (format == 'x')
			tmp = ft_putchar(x + 'a' - 10);
		if (format == 'X')
			tmp = ft_putchar(x + 'A' - 10);
	}
	return (tmp);
}

int	ft_print_hex(unsigned int x, char format)
{
	int	len;
	int	tmp;

	len = 0;
	if (x >= 16)
	{
		tmp = ft_print_hex(x / 16, format);
		if (tmp == -1)
			return (-1);
		len += tmp;
		tmp = ft_print_hex(x % 16, format);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	else
	{
		tmp = ft_print_hex_tmp(x, format);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	return (len);
}

int	ft_print_hex_tmp_long(unsigned long long p)
{
	int	tmp;

	if (p < 10)
		tmp = ft_putchar(p + 48);
	else
		tmp = ft_putchar(p + 87);
	if (tmp == -1)
		return (-1);
	return (tmp);
}

int	ft_print_addr_tmp(unsigned long long p)
{
	int	tmp;
	int	len;

	len = 0;
	if (p >= 16)
	{
		tmp = ft_print_addr_tmp(p / 16);
		if (tmp == -1)
			return (-1);
		len += tmp;
		tmp = ft_print_addr_tmp(p % 16);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (p < 16)
	{
		tmp = ft_print_hex_tmp_long(p);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	return (len);
}

int	ft_print_addr(unsigned long long p)
{
	int	tmp;
	int	len;

	len = 0;
	tmp = ft_putstr("0x");
	if (tmp == -1)
		return (-1);
	len += tmp;
	tmp = ft_print_addr_tmp(p);
	if (tmp == -1)
		return (-1);
	len += tmp;
	return (len);
}
