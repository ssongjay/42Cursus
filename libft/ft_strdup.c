/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:10:51 by injsong           #+#    #+#             */
/*   Updated: 2022/10/18 13:09:06 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen_ex00(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i;
	char *dup_str;

	dup_str = (char *)malloc(sizeof(char) * (ft_strlen_ex00(src) + 1));
	if (dup_str == NULL)
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