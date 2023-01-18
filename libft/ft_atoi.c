/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:06:57 by injsong           #+#    #+#             */
/*   Updated: 2023/01/18 19:01:52 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	int					sign_count;
	unsigned long long	result;

	sign = 1;
	sign_count = 0;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (sign_count != 0)
			return (0);
		if (*str == '-')
			sign *= (-1);
		str++;
		sign_count++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + ((*str++) - '0');
	if (result > 9223372036854775807 && sign == 1)
		return (-1);
	else if (result > 9223372036854775808ULL && sign == -1)
		return (0);
	return (result * sign);
}
