/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:53:58 by injsong           #+#    #+#             */
/*   Updated: 2023/05/24 19:22:34 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*new_line(int fd, char *main_buffer)
{
	char	*buffer;
	int		size;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	size = 1;
	while (!ft_strchr(main_buffer, '\n') && size != 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size == -1)
		{
			free(main_buffer);
			free(buffer);
			return (NULL);
		}
		buffer[size] = '\0';
		main_buffer = ft_strjoin(main_buffer, buffer);
	}
	free(buffer);
	return (main_buffer);
}

char	*set_line(char *main_buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!main_buffer[i])
		return (NULL);
	while (main_buffer[i] && main_buffer[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (main_buffer[i] && main_buffer[i] != '\n')
	{
		line[i] = main_buffer[i];
		i++;
	}
	if (main_buffer[i] == '\n')
	{
		line[i] = main_buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*next_line(char *main_buffer)
{
	int		i;
	int		j;
	char	*buffer;

	i = 0;
	while (main_buffer[i] && main_buffer[i] != '\n')
		i++;
	if (!main_buffer[i])
	{
		free(main_buffer);
		return (NULL);
	}
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(main_buffer) - i + 1));
	if (!buffer)
		return (NULL);
	i++;
	j = 0;
	while (main_buffer[i])
		buffer[j++] = main_buffer[i++];
	buffer[j] = '\0';
	free(main_buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*main_buffer[OPEN_MAX + 1];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (0);
	main_buffer[fd] = new_line(fd, main_buffer[fd]);
	if (!main_buffer[fd])
		return (NULL);
	line = set_line(main_buffer[fd]);
	main_buffer[fd] = next_line(main_buffer[fd]);
	return (line);
}
