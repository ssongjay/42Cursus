/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:02:49 by injsong           #+#    #+#             */
/*   Updated: 2022/12/05 15:23:29 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include"ft_strlen.c"

char	*ft_strrchr(const char *str, int ch)
{
	char *last;
	
	last = 0;
	while (*str)
	{
		if (*str == (char)ch)
			last = str;
		str++;
	}
	if (ch == 0)
		return ((char *)str);
	return (last);
}
