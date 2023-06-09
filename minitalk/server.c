/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injsong <injsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:55:41 by injsong           #+#    #+#             */
/*   Updated: 2023/06/09 17:21:04 by injsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int sig)
{
	static char	tmp;
	static int	bit;

	if (sig == SIGUSR1)
		tmp |= 0;
	else if (sig == SIGUSR2)
		tmp |= 1;
	if (bit < 7)
		tmp <<= 1;
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", tmp);
		bit = 0;
		tmp = 0;
	}
}

int	main(void)
{
	ft_printf("Server's PID is: %d\n", getpid());
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	while (1)
		pause();
	return (0);
}
