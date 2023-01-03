/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-inje <song-inje@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:02:49 by injsong           #+#    #+#             */
/*   Updated: 2023/01/03 12:07:28 by song-inje        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
	char *last;

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
