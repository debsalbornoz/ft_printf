/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:39:41 by dlamark-          #+#    #+#             */
/*   Updated: 2023/10/14 16:02:24 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;  // Variable argument list
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, str);  // Initialize variable argument list
	while (*str != '\0')
	{
		if (*str == '%')
		{
			len += print_format(args, *(str + 1));  // Print and count characters based on format specifiers
			str++;
		}
		else
		{
			ft_putchar(*str);  // Print non-format specifier character
			i++;
		}
		str++;
	}
	len = len + i;  // Total characters printed (including non-format specifier characters)
	va_end(args);  // End variable argument list
	return (len);
}


int	print_format(va_list args, const char format)
{
	int	len;

	len = 0;
	// Process different format specifiers and print corresponding values
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	if ((format == 'i') || (format == 'd'))
		len += ft_putnbr(va_arg(args, int));
	if (format == '%')
	{
		ft_putchar('%');  // Print '%' character
		len += 1;
	}
	if (format == 'x')
		len += ft_hexadecimal(va_arg(args, unsigned int), HEX_BASE_LOWER, 16);
	if (format == 'X')
		len += ft_hexadecimal(va_arg(args, unsigned int), HEX_BASE_UPPER, 16);
	if (format == 'p')
		len += ft_putptr(va_arg(args, long long int), HEX_BASE_LOWER, 16);
	if (format == 'u')
		len += ft_unsigned(va_arg(args, unsigned long int));
	return (len);  // Return the total number of characters printed for the specific format specifier
}
