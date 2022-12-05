/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:02:30 by injsong           #+#    #+#             */
/*   Updated: 2022/12/05 18:32:05 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] && str2[i]))
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
