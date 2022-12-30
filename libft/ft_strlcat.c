/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:22:35 by injsong           #+#    #+#             */
/*   Updated: 2022/12/29 14:58:16 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i < dstsize && *dst != '\0')
	{
		dst++;
		i++;
	}
	if (i == dstsize)
		return (src_len + dstsize);
	while ((i + 1 < dstsize) && *src != '\0')
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (dst_len + src_len);
}
