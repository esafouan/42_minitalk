/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:39:32 by esafouan          #+#    #+#             */
/*   Updated: 2022/12/23 14:41:22 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handle(int signal)
{
	static int	i;
	static int	bit;

	if (signal == SIGUSR1)
		i = i | (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int ac, char **argv)
{
	int	pid;

	pid = getpid();
	(void)argv;
	if (ac == 1)
	{
		ft_printf("pid :%d\n", pid);
		while (ac == 1)
		{
			signal(SIGUSR1, handle);
			signal(SIGUSR2, handle);
			pause();
		}
	}
	else
		ft_printf("error\n");
}
