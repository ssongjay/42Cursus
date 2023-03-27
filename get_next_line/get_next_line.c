/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:22:57 by injsong           #+#    #+#             */
/*   Updated: 2023/03/27 22:33:02 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*set_line(char const *save)
{
	size_t	len;
	char	*line;

	if (ft_strchr(save, '\n'))
		len = ft_strchr(save, '\n') - save + 1;
	else
		len = ft_strchr(save, '\0') - save;
	line = (char *)malloc(sizeof(char) * (len + 1));
	if (line == NULL)
		return (NULL);
	ft_strlcpy(line, save, len + 1);
	return (line);
}

static char	*set_remains(char **s_save, size_t offset)
{
	char	*new;

	new = malloc(ft_strlen(*s_save + offset) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, *s_save + offset, ft_strlen(*s_save + offset) + 1);
	free(*s_save);
	*s_save = NULL;
	*s_save = new;
	return (*s_save);
}

static char	*update_new_malloc(char const *save, char const *buf)
{
	char	*new;

	if (!buf || !*buf)
		return (NULL);
	else if (!save && buf)
	{
		new = malloc(ft_strlen(buf) + 1);
		if (new == NULL)
			return (NULL);
		ft_strlcpy(new, buf, ft_strlen(buf) + 1);
		return (new);
	}
	new = malloc(ft_strlen(save) + ft_strlen(buf) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, save, ft_strlen(save) + 1);
	ft_strlcpy(new + ft_strlen(save), buf, ft_strlen(buf) + 1);
	return (new);
}

static char	*read_fd(char **p_save, int fd)
{
	char		*buf;
	ssize_t		byte;
	char		*tmp;
	char		*new;

	buf = malloc(BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	new = *p_save;
	while (new == NULL || !ft_strchr(new, '\n'))
	{	
		byte = read(fd, buf, BUFFER_SIZE);
		if (byte <= 0)
			break ;
		buf[byte] = 0;
		tmp = new;
		new = update_new_malloc(new, buf);
		free(tmp);
		tmp = NULL;
	}
	free(buf);
	buf = NULL;
	if (byte < 0)
		return (NULL);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	save = read_fd(&save, fd);
	if (save == NULL)
		return (NULL);
	if (*save == 0)
	{
		free(save);
		save = NULL;
		return (NULL);
	}
	line = set_line(save);
	if (line == NULL)
		return (NULL);
	save = set_remains(&save, ft_strlen(line));
	if (save == NULL)
	{
		return (NULL);
	}
	return (line);
}
