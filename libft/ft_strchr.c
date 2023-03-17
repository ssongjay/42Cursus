/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:37:02 by injsong           #+#    #+#             */
/*   Updated: 2023/03/17 16:29:26 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if if ((unsigned char)str[i] == (unsigned char)ch)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
