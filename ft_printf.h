/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:37:13 by dlamark-          #+#    #+#             */
/*   Updated: 2023/07/05 23:48:08 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define HEX_BASE_LOWER "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		count_base10(int nbr);
int		ft_putnbr(long int n);
int		ft_printf(const char *str, ...);
int		print_format(va_list args, const char format);
int		count_hexadecimal(unsigned long int nbr);
int		ft_hexadecimal(unsigned int n, char *base, unsigned int base_len);
void	ft_printptr(unsigned long int n, char *base, unsigned int base_len);
int		ft_putptr(unsigned long int n, char *base, unsigned int base_len);
int		ft_unsigned(unsigned int n);
int		count_unsigned(unsigned int nbr);

#endif