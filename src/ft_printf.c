/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:25:36 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/14 13:19:38 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	parser(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchr(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_putuni(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (format == '%')
		return (ft_putchr('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	unsigned int	total_length;
	va_list			args;

	if (!format)
		return (-1);
	i = 0;
	total_length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			total_length += parser(args, format[i]);
		}
		else
		{
			total_length += ft_putchr(format[i]);
		}
		i++;
	}
	va_end(args);
	return (total_length);
}

/*
int	main(void)
{
	char	*color = "\n\033[1;4;91m%s\033[0m\n";;
	int		i = 0;

	// Characters
	char	c[] = {'H', 'e', 'l'};
	
	ft_printf(color, "%c - Prints a character:");
	i = ft_printf("ft_printf: %c%c%c%c%c", c[0], c[1], c[2], 'l', 'o');
	ft_printf("	|	Returns: %d\n", i);
	i = printf("   printf: %c%c%c%c%c", c[0], c[1], c[2], 'l', 'o');
	printf("	|	Returns: %d\n", i);

	// Strings
	char	*str1 = "Nana";
	char	*str2 = "ch";

	ft_printf(color, "%s - Prints a string:");
	i = ft_printf("ft_printf: %s%s%s", str1, str2, "i");
	ft_printf("	|	Returns: %d\n", i);
	i = printf("   printf: %s%s%s", str1, str2, "i");
	printf("	|	Returns: %d\n", i);

	// Integers
	int		nbr[] = {0, 42, -42, 2147483647, -2147483648};

	ft_printf(color, "%d & %i - Prints an integer:");
	i = ft_printf("Zero: %d", nbr[0]);
	ft_printf("			|	Returns: %d\n", i);
	i = ft_printf("Pos int: %d", nbr[1]);
	ft_printf("		|	Returns: %d\n", i);
	i = ft_printf("Neg int: %i", nbr[2]);
	ft_printf("		|	Returns: %d\n", i);
	i = ft_printf("Int max: %d", nbr[3]);
	ft_printf("	|	Returns: %d\n", i);
	i = ft_printf("Int min: %i", nbr[4]);
	ft_printf("	|	Returns: %d\n", i);

	// Unsigined Integers
	unsigned int	uni[] = {0, 42, 2147483647, 4294967295};

	ft_printf(color, "%u - Prints an unsigned integer:");
	i = ft_printf("Zero: %u", nbr[0]);
	ft_printf("			|	Returns: %d\n", i);
	i = ft_printf("Int: %u", nbr[1]);
	ft_printf("			|	Returns: %d\n", i);
	i = ft_printf("Int max: %u", nbr[2]);
	ft_printf("	|	Returns: %d\n", i);

	// Base 16
	int		base[] = {0, 10, 16, -1};
	ft_printf(color, "%x & %X - Prints an integer in base 16:");
	i = ft_printf("0: %x", base[0]);
	ft_printf("			|	Returns: %d\n", i);
	i = ft_printf("10: %%x -> %x		|\n    %%X -> %X", base[1], base[1]);
	ft_printf("		|	Returns: %d\n", i);
	i = ft_printf("16: %x", base[2]);
	ft_printf("			|	Returns: %d\n", i);
	i = ft_printf("-1: %%x -> %x	|\n    %%X -> %X", base[3], base[3]);
	ft_printf("	|	Returns: %d\n", i);

	// Pointers
	char	*ptr = "Nanachi";
	
	ft_printf(color, "%p - Prints an address:");
	i = ft_printf("Variable: %p", ptr);
	ft_printf("	|	Returns: %d\n", i);
	i = ft_printf("Pointer: %p", &ptr);
	ft_printf("	|	Returns: %d\n", i);

	// Percent
	ft_printf(color, "%% - Prints a percent:");
	i = ft_printf("%%");
	ft_printf("			|	Returns: %d\n", i);
	i = ft_printf("%%%%%%%%%%%%%%");
	ft_printf("			|	Returns: %d\n", i);

	ft_printf("\033[1;91m\n\n  |\\__/|\n /     \\\n/_.~ ~._\\\n   \\@/");
	ft_printf("\n  F L O\033[0m\n");
	return (0);
}
*/
