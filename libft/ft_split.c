/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:48:20 by injsong           #+#    #+#             */
/*   Updated: 2022/12/29 15:33:37 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
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
			result[index] = ft_strdup(&str[copy_tmp]);
			if (!result[index])
				return (0);
		}
		else
			i++;
	}
	return (1);
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
	int		i;
	char	**result;
	int		success;

	if (!str)
		return (0);
	result = (char **)malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!result)
		return (0);
	i = 0;
	success = copy_word(result, c, (char *)str);
	if (!success)
	{
		ft_free(result, count_word(str, c));
		return (0);
	}
	result[count_word(str, c)] = 0;
	return (result);
}
