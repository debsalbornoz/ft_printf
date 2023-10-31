/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:35:38 by dlamark-          #+#    #+#             */
/*   Updated: 2023/10/14 16:01:58 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_hexadecimal(unsigned long int nbr)
{
	unsigned int	i;  // Counter for digits

	i = 1;
	while (nbr > 15)  // While the number is greater than 15 (hexadecimal digit limit)
	{
		nbr = nbr / 16;  // Divide by 16 to get the next digit
		i++;  // Increment digit count
	}
	return (i);  // Return the total number of digits in hexadecimal representation
}

int	ft_hexadecimal(unsigned int n, char *base, unsigned int base_len)
{
	char	c;  // Variable to store hexadecimal digit as character

	if (n >= base_len)  // If the number is greater than or equal to base length, recurse to print the higher digits
		ft_hexadecimal(n / base_len, base, base_len);

	c = base[n % base_len];  // Get the current digit in hexadecimal representation
	write(1, &c, 1);  // Print the digit
	return (count_hexadecimal(n));  // Return the total number of characters printed in hexadecimal format
}

