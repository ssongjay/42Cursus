/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:24:54 by injsong           #+#    #+#             */
/*   Updated: 2023/03/17 16:28:22 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strdef.h>

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

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	len;
	char	*join_str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!join_str)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		join_str[i++] = *s1++;
	while (*s2 != '\0')
		join_str[i++] = *s2++;
	join_str[i] = '\0';
	return (join_str);
}

char	*ft_strchr(const char *str, int ch)
{
	int	i;

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
