/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-inje <song-inje@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:38:09 by song-inje         #+#    #+#             */
/*   Updated: 2023/01/02 14:56:26 by song-inje        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (!s)
		return;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}