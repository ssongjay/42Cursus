/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:02:49 by injsong           #+#    #+#             */
/*   Updated: 2023/01/19 14:18:34 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *str, int ch)
{
	char	*last;

	last = 0;
	while (*str != '\0')
	{
		if (*str == (unsigned char)ch)
			last = (char *)str;
		str++;
	}
	if ((unsigned char)ch == '\0')
		return ((char *)str);
	return (last);
}
