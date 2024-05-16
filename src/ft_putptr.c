/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:22:01 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/14 10:16:39 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ptr_to_hex(size_t nbr, char *base)
{
	unsigned int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ptr_to_hex(nbr / 16, base);
	}
	ft_putchr(base[nbr % 16]);
	i++;
	return (i);
}

int	ft_putptr(void *ptr)
{
	unsigned int	i;

	i = 0;
	if (ptr == NULL)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	i = ptr_to_hex((size_t)ptr, "0123456789abcdef");
	return (i + 2);
}
