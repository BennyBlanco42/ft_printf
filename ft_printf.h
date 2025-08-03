//METTRE HEADER 42


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthex(unsigned int n, char format);
int	ft_putptr(unsigned long long ptr);
int	ft_printf(const char *format, ...);
int	ft_format(va_list args, char format);

#endif 