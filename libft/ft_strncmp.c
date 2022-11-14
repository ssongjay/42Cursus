/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:02:30 by injsong           #+#    #+#             */
/*   Updated: 2022/10/08 18:52:15 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && ((*s1 != '\0') && (*s2 != '\0')))
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}