/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:22:29 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/14 10:22:26 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>	// write()
# include <stdarg.h>	// Variadic Functions
# include <stdio.h>		// printf()

int		ft_printf(const char *format, ...);

int		ft_putchr(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_putuni(unsigned int nbr);
int		ft_puthex(unsigned int nbr, char *base);
int		ft_putptr(void *ptr);

#endif
