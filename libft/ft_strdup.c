/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:10:51 by injsong           #+#    #+#             */
/*   Updated: 2022/12/29 15:03:46 by injsong          ###   ########.fr       */
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
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dup_str[i] = src[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
