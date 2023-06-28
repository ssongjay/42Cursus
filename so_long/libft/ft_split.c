/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:48:20 by injsong           #+#    #+#             */
/*   Updated: 2023/01/19 14:51:55 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_word(const char *str, char c)
{
	size_t	i;
	size_t	num;

	num = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while ((str[i] != c) && str[i])
				i++;
			num++;
		}
		else
			i++;
	}
	return (num);
}

static int	copy_word(char **result, char c, const char *str)
{
	size_t	i;
	size_t	copy_tmp;
	size_t	index;

	i = 0;
	index = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			copy_tmp = i;
			while ((str[i] != c) && str[i])
				i++;
			if (i - copy_tmp == 0)
				return (0);
			result[index] = (char *)malloc(sizeof(char) * (i - copy_tmp + 1));
			if (!result[index])
				return (index);
			ft_strlcpy(result[index], &str[copy_tmp], i - copy_tmp + 1);
			index++;
		}
		else
			i++;
	}
	return (-1);
}

static void	ft_free(char **result, size_t word)
{
	size_t	i;

	i = 0;
	while (i < word && result[i] != 0)
		free(result[i++]);
	free(result);
}

char	**ft_split(const char *str, char c)
{
	char	**result;
	int		success;

	if (!str)
		return (0);
	result = (char **)malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!result)
		return (0);
	success = copy_word(result, c, (char *)str);
	if (success != -1)
	{
		ft_free(result, success);
		return (0);
	}
	result[count_word(str, c)] = 0;
	return (result);
}
