/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:43:41 by anonymou          #+#    #+#             */
/*   Updated: 2018/01/24 11:52:18 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putoctal_long(unsigned long p, t_struct *para)
{
	unsigned long	adr;
	char const		base[9];
	char			res[9];
	int				i;

	adr = p;
	ft_strcpy((char *)base, "01234567");
	i = 10;
	while ((adr / 8) > 0 || i >= 10)
	{
		res[i] = base[(adr % 8)];
		adr /= 8;
		i--;
	}
	res[i] = base[(adr % 8)];
	while (i < 11)
	{
		para->res++;
		ft_putchar(res[i]);
		i++;
	}
}

void	ft_puthex_long(unsigned long p, t_struct *para)
{
	unsigned long	adr;
	char const		base[16];
	char			res[9];
	int				i;

	adr = p;
	ft_strcpy((char *)base, "0123456789abcdef");
	i = 10;
	while ((adr / 16) > 0 || i >= 10)
	{
		res[i] = base[(adr % 16)];
		adr /= 16;
		i--;
	}
	res[i] = base[(adr % 16)];
	while (i < 11)
	{
		para->res++;
		ft_putchar(res[i]);
		i++;
	}
}
