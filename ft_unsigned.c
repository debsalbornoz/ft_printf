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

int	count_unsigned(unsigned int nbr)
{
	unsigned int	i;  // Counter for digits

	i = 1;
	while (nbr > 9)  // While the number has more than one digit
	{
		nbr = nbr / 10;  // Divide by 10 to remove the last digit
		i++;  // Increment digit count
	}
	return (i);  // Return the total number of digits in the integer
}

int	ft_unsigned(unsigned int n)
{
	char	c;  // Variable to store digits as characters

	c = n % 10 + '0';  // Convert the last digit to a character
	if (n >= 10)  // If the number has more than one digit, print the remaining digits recursively
	{
		ft_putnbr(n / 10);
	}
	write(1, &c, 1);  // Print the current digit
	return (count_unsigned(n));  // Return the total number of characters printed for the unsigned integer
}
