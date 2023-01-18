/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 18:26:27 by injsong           #+#    #+#             */
/*   Updated: 2023/01/18 18:52:48 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_number(long long n)
{
	size_t	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		cnt++;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	int			num_len;
	char		*result;
	long long	tmp;

	num_len = count_number(n);
	tmp = n;
	result = (char *)malloc(sizeof(char) * (num_len + 1));
	if (!result)
		return (0);
	result[num_len] = '\0';
	if (!n)
		result[0] = '0';
	else if (n < 0)
	{
		result[0] = '-';
		tmp *= (-1);
	}
	while (tmp)
	{
		result[--num_len] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (result);
}
