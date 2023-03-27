/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:24:54 by injsong           #+#    #+#             */
/*   Updated: 2023/03/27 21:19:46 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)ch)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;
	size_t	index;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	index = -1;
	while (++index <= len)
		dest[index] = src[index];
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			((unsigned char *)dst)[i - 1] = ((unsigned char *)src)[i - 1];
			i--;
		}
	}
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	src_len;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	if (src_len + 1 >= n)
	{
		ft_memmove(dst, src, n - 1);
		dst[n - 1] = '\0';
	}
	else
	{
		ft_memmove(dst, src, src_len);
		dst[src_len] = '\0';
	}
	return (src_len);
}
