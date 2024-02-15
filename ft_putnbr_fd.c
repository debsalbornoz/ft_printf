/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:11:21 by dlamark-          #+#    #+#             */
/*   Updated: 2023/10/14 16:04:59 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Prints a long integer to the terminal

int	ft_putnbr(long int n)
{
	char	c; 

	if (n == -2147483648)  
	{
		write(1, "-2147483648", 11);
		return ;
	}
	c = n % 10 + '0'; 
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		c = n % 10 + '0'; 
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	write(1, &c, 1); 
}



