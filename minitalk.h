/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:21:30 by esafouan          #+#    #+#             */
/*   Updated: 2022/12/16 22:23:08 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include <stdarg.h>
# include <string.h>

int		ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
int		ft_printf(const char *s, ...);
int		ft_putstr(char *s);
int		ft_putnbr(long n);
int		ft_hexadicimal_lower(unsigned int n);
int		adress(unsigned long n);
int		ft_hexadicimal_ouper(unsigned int n);
int		ft_putchar(char c);

#endif
