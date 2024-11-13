/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:11:09 by iarslan           #+#    #+#             */
/*   Updated: 2024/11/13 03:45:27 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	x;
	long	number;

	number = (long)n;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number > 9)
	{
		ft_putnbr((number) / 10);
		ft_putnbr((number) % 10);
	}
	else
	{
		x = number + '0';
		write(1, &x, 1);
	}
}
