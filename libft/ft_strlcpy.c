/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:49:18 by injsong           #+#    #+#             */
/*   Updated: 2022/10/06 20:55:39 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_src_len(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = get_src_len(src);
	i = 0;
	if (size != 0)
	{
		while (i < size - 1)
		{
			if (src[i])
				dest[i] = src[i];
			else if (!src[i])
				dest[i] = '\0';
			i++;
		}
	}
	return (src_len);
}
