/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:26:57 by dlamark-          #+#    #+#             */
/*   Updated: 2023/10/14 16:02:56 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Counts the number of digits in an unsigned integer
int	count_unsigned(unsigned int nbr)
{
	unsigned int	i;

	i = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

// Prints the digits to the terminal and returns its lenght
int	ft_unsigned(unsigned int n)
{
	char	c;

	c = n % 10 + '0';
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &c, 1); 
	return (count_unsigned(n));
}
