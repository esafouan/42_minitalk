/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:56:31 by esafouan          #+#    #+#             */
/*   Updated: 2022/12/16 22:24:15 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

int	ft_hexadicimal_lower(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			n += 48;
		else
			n += 87;
		len += ft_putchar((char )n);
	}
	else
	{
		len += ft_hexadicimal_lower(n / 16);
		len += ft_hexadicimal_lower(n % 16);
	}
	return (len);
}

int	adress(unsigned long n)
{
	int	len;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			n += 48;
		else
			n += 87;
		len += ft_putchar((char )n);
	}
	else
	{
		len += adress(n / 16);
		len += adress(n % 16);
	}
	return (len);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	sign;

	sign = 1;
	i = 0;
	j = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str && str[i] && str[i] <= '9' && str[i] >= '0')
	{
		j = j * 10 + str[i] - 48;
		i++;
	}
	return (j * sign);
}
