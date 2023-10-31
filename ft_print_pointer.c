/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:57:15 by dlamark-          #+#    #+#             */
/*   Updated: 2023/10/14 16:02:06 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptr(unsigned long int n, char *base, unsigned int base_len)
{
	char	c;  // Variable to store hexadecimal digit as character

	if (n >= base_len)  // If the number is greater than or equal to base length, recurse to print the higher digits
		ft_printptr(n / base_len, base, base_len);

	c = base[n % base_len];  // Get the current digit in hexadecimal representation
	write(1, &c, 1);  // Print the digit
}

int	ft_putptr(unsigned long int n, char *base, unsigned int base_len)
{
	if (n == 0)  // If the number is zero, print "(nil)"
	{
		write(1, "(nil)", 5);
		return (5);
	}

	ft_putchar('0');  // Print '0'
	ft_putchar('x');  // Print 'x'
	ft_printptr(n, base, base_len);  // Print the pointer address in hexadecimal format
	return (count_hexadecimal(n) + 2);  // Return the total number of characters printed (including '0x')
}
