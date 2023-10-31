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

int	ft_putnbr(long int n)
{
	char	c;  // Variable to store digits as characters

	if (n == -2147483648)  // Handle special case for INT_MIN
	{
		write(1, "-2147483648", 11);  // Print the constant string
		return ;
	}

	c = n % 10 + '0';  // Convert the last digit to a character
	if (n < 0)  // If the number is negative, print the negative sign and negate n
	{
		write(1, "-", 1);
		n = -n;
		c = n % 10 + '0';  // Update the character representation of the last digit
	}

	if (n >= 10)  // Recursively print the remaining digits
	{
		ft_putnbr(n / 10);
	}
	
	write(1, &c, 1);  // Print the current digit
}



