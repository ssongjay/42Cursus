/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:03:48 by injsong           #+#    #+#             */
/*   Updated: 2023/05/02 16:44:39 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	tmp;

	tmp = write(1, &c, 1);
	if (tmp == -1)
		return (-1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;
	int	tmp;

	i = 0;
	if (s == NULL)
	{
		tmp = ft_putstr("(null)");
		if (tmp == -1)
			return (-1);
		return (6);
	}
	while (s[i])
	{
		tmp = write(1, &s[i], 1);
		if (tmp == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_putnbr_tmp(void)
{
	int	tmp;

	tmp = write(1, "-2147483648", 11);
	if (tmp == -1)
		return (-1);
	return (tmp);
}

int	ft_putnbr(int n)
{
	int	len;
	int	tmp;

	len = 0;
	if (n == -2147483648)
	{
		if (ft_putnbr_tmp() == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		tmp = ft_putchar('-');
		if (tmp == -1)
			return (-1);
		len += tmp;
		n = -n;
	}
	if (n > 9)
		len += ft_putnbr(n / 10);
	tmp = ft_putchar(n % 10 + '0');
	if (tmp == -1)
		return (-1);
	len += tmp;
	return (len);
}

int	ft_putnbr_u(unsigned int n)
{
	int	len;
	int	tmp;

	len = 0;
	if (n > 9)
		len += ft_putnbr_u(n / 10);
	tmp = ft_putchar(n % 10 + '0');
	if (tmp == -1)
		return (-1);
	len += tmp;
	return (len);
}
