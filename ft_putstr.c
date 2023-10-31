/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlamark- <dlamark-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:30:58 by dlamark-          #+#    #+#             */
/*   Updated: 2023/10/14 16:02:45 by dlamark-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)  // If the input string is NULL, print "(null)"
	{
		write(1, "(null)", 6);
		return (6);  // Return 6, indicating 6 characters have been printed
	}
	while (str[i] != '\0')  // Loop through the string until the null terminator is encountered
	{
		ft_putchar(str[i]);  // Print each character of the string
		i++;  // Move to the next character
	}
	return (i);  // Return the total number of characters printed in the string
}
