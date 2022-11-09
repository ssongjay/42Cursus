/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:22:35 by injsong           #+#    #+#             */
/*   Updated: 2022/11/09 16:38:49 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_len;
	unsigned int src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (i < size && *dest)
	{
		dest++;
		i++;
	}
	if (i == size)
		return (src_len + size);
	// 오버플로우 고려?
	while (i < size - 1 && *src)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
