/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:03:40 by injsong           #+#    #+#             */
/*   Updated: 2022/12/23 20:02:02 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"ft_strlen.c"
#include"ft_memcpy.c"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*join_str;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_str = (char *)malloc(sizeof(char) * (s1_len + s2_len) + 1)	;
	if (!join_str)
		return (0);
	ft_memcpy(join_str, s1, s1_len);
	ft_memcpy(join_str + s1_len, s2, s2_len);
	join_str[s1_len + s2_len] = '\0';
	return (join_str);
}
