/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchanteu <bchanteu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:46:11 by bchanteu          #+#    #+#             */
/*   Updated: 2025/08/03 15:46:11 by bchanteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//METTRE HEADER UNE FOIS A 42

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	if (format == 'p')
		return (ft_putptr(va_arg(args, unsigned long long)));
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count += ft_format(args, format[++i]);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
