/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-inje <song-inje@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:32:18 by song-inje         #+#    #+#             */
/*   Updated: 2022/12/06 23:54:57 by song-inje        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((haystack[i + j] == needle[j]) && (i + j) < len)
				j++;
			if (needle[j] == '\0')
				return (haystack[i]);
		}
	}
	return (0);
}