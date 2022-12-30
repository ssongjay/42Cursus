/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:02:49 by injsong           #+#    #+#             */
/*   Updated: 2022/12/28 18:57:13 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char	*ft_strrchr(const char *str, int ch)
{
	char	*last;

	last = 0;
	while (*str != '\0')
	{
		if (*str == (char)ch)
			last = (char *)str;
		str++;
	}
	if (ch == 0)
		return ((char *)str);
	return (last);
}
