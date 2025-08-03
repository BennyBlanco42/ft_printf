/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchanteu <bchanteu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:53:46 by bchanteu          #+#    #+#             */
/*   Updated: 2025/08/03 17:49:07 by bchanteu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	len1;
	int	len2;

	// Test 1 : chaîne simple
	len1 = printf("printf : Hello 42!\n");
	len2 = ft_printf("ft_printf : Hello 42!\n");
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	// Test 2 : %c (char)
	len1 = printf("printf : char: %c\n", 'A');
	len2 = ft_printf("ft_printf : char: %c\n", 'A');
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	// Test 3 : %s (string)
	len1 = printf("printf : string: %s\n", "hello");
	len2 = ft_printf("ft_printf : string: %s\n", "hello");
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	// Test 4 : %d / %i (signed int)
	len1 = printf("printf : int: %d\n", -42);
	len2 = ft_printf("ft_printf : int: %d\n", -42);
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	// Test 5 : %u (unsigned)
	len1 = printf("printf : unsigned: %u\n", 3000000000);
	len2 = ft_printf("ft_printf : unsigned: %u\n", 3000000000);
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	// Test 6 : %x / %X (hex)
	len1 = printf("printf : hex: %x %X\n", 255, 255);
	len2 = ft_printf("ft_printf : hex: %x %X\n", 255, 255);
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	// Test 7 : %p (pointer)
	int	var = 42;
	len1 = printf("printf : pointer: %p\n", &var);
	len2 = ft_printf("ft_printf : pointer: %p\n", &var);
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	// Test 8 : %%
	len1 = printf("printf : 100%% ok\n");
	len2 = ft_printf("ft_printf : 100%% ok\n");
	printf("=> return: %d | ft_return: %d\n\n", len1, len2);

	return (0);
}