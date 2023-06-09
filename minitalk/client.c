/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:55:46 by injsong           #+#    #+#             */
/*   Updated: 2023/06/09 18:46:36 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

int	ft_atoi(const char *str)
{
	int					sign;
	int					sign_count;
	unsigned long long	result;

	sign = 1;
	sign_count = 0;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (sign_count != 0)
			return (0);
		if (*str == '-')
			sign *= (-1);
		str++;
		sign_count++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + ((*str++) - '0');
	if (result > 9223372036854775807 && sign == 1)
		return (-1);
	else if (result > 9223372036854775808ULL && sign == -1)
		return (0);
	return (result * sign);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	index;
	size_t	len;
	char	*result;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	index = 0;
	while (*s1 != '\0')
		result[index++] = *s1++;
	while (*s2 != '\0')
		result[index++] = *s2++;
	result[index] = '\0';
	return (result);
}

void	send_msg(int pid, char *str, int len)
{
	int	index;
	int	bit;
	int	tmp;

	index = 0;
	while (index < len)
	{
		bit = 0;
		while (bit < 8)
		{
			tmp = str[index] >> (7 - bit) & 1;
			if (tmp == 0)
				kill(pid, SIGUSR1);
			else if (tmp == 1)
				kill(pid, SIGUSR2);
			usleep(100);
			bit++;
		}
		usleep(300);
		index++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*message;
	int		len;

	if (argc != 3)
	{
		ft_printf("Wrong number of arguments\n");
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	if (pid < 100 || pid > 99998)
	{
		ft_printf("Invalid PID\n");
		exit(1);
	}
	message = ft_strjoin(argv[2], "\n");
	if (!message)
		exit(1);
	len = ft_strlen(message);
	send_msg(pid, message, len);
	free(message);
	return (0);
}
