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

// Counts the number of hexadecimal digits in an unsigned long integer

int	count_hexadecimal(unsigned long int nbr)
{
	unsigned int	i; 

	i = 1;
	while (nbr > 15)
	{
		nbr = nbr / 16; 
		i++;
	}
	return (i);
}

// Prints the hexadecimal representation of an unsigned integer to the terminal

int ft_hexadecimal(unsigned int n, char *base, unsigned int base_len)
{
    char c;

    if (n >= base_len)
        ft_hexadecimal(n / base_len, base, base_len);
    c = base[n % base_len];
    write(1, &c, 1);
    return count_hexadecimal(n);
}
