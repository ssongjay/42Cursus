/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-inje <song-inje@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:22:50 by injsong           #+#    #+#             */
/*   Updated: 2023/03/28 03:24:33 by song-inje        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd);

size_t ft_strlen(char *s);
char *ft_strchr(char *str, int ch);
void *ft_memcpy(void *dst, const void *src, size_t n);
char *ft_strjoin(char *s1, char *s2);

#endif