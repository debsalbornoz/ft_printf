/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:39:15 by dlamark-          #+#    #+#             */
/*   Updated: 2023/10/14 16:01:48 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_base10(int nbr)
{
	unsigned int	i;
	i = 1;

	if (nbr < 0)  // If the number is negative, account for the negative sign
	{
		nbr *= -1;
		i++;
	}

	// Count the number of digits using integer division by 10
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);  // Return the total number of digits
}

int	ft_putnbr(long int n)
{
	char	c;          // Variable to store digits as characters
	int		ft_count;   // Total number of characters printed (including negative sign and digits)

	ft_count = count_base10(n);  // Count the number of digits in the integer

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);  // Handle special case for INT_MIN
		return (11);
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
	return (ft_count);  // Return the total number of characters printed
}
