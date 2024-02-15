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

// Recursively prints the hexadecimal representation of an unsigned long integer
void ft_printptr(unsigned long int n, char *base, unsigned int base_len)
{
    char c;
    if (n >= base_len)
        ft_printptr(n / base_len, base, base_len);
    c = base[n % base_len];
    write(1, &c, 1);
}

// Prints the hexadecimal representation of a pointer and returns the total count
int ft_putptr(unsigned long int n, char *base, unsigned int base_len)
{
    if (n == 0)
    {
        write(1, "(nil)", 5);
        return 5;
    }
    ft_putchar('0');
    ft_putchar('x');
    ft_printptr(n, base, base_len);
    return count_hexadecimal(n) + 2;
}
