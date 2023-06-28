/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:10:51 by injsong           #+#    #+#             */
/*   Updated: 2023/03/17 16:29:54 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	src_len;
	size_t	i;
	char	*dup_str;

	src_len = ft_strlen(src);
	dup_str = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!dup_str)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup_str[i] = src[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
