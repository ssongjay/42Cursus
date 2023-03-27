/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:22:50 by injsong           #+#    #+#             */
/*   Updated: 2023/03/27 19:03:46 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *str, int ch);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
char	*get_next_line(int fd);
#endif