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
 
// Counts the number of digits in a decimal integer
int	count_base10(int nbr)
{
	unsigned int	i;
	i = 1;

	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i); 
}

// Prints a long integer in decimal format to the terminal and returns the total count of digits
int ft_putnbr(long int n)
{
    char c;
    int ft_count;

    ft_count = count_base10(n);
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return 11;
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
    return (ft_count);
}

