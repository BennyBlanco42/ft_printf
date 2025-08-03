/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchanteu <bchanteu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:09:58 by bchanteu          #+#    #+#             */
/*   Updated: 2025/08/03 17:51:12 by bchanteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (ptr >= 16)
		count += ft_putptr(ptr / 16);
	else
		count += ft_putstr("0x"); 
	count += ft_putchar("0123456789abcdef"[ptr % 16]);
	return (count);
}