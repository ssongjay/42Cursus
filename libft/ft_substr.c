/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:25:22 by injsong           #+#    #+#             */
/*   Updated: 2023/01/04 16:59:22 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	sub_str = 0;
	i = 0;
	if (!s)
		return (0);
	if ((!len) || (start >= ft_strlen(s)))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (0);
	while (i < len)
	{
		sub_str[i] = s[i + start];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
