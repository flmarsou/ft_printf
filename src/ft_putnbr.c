/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:56:52 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/14 10:17:27 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchr('-');
		i++;
	}
	if (nbr > 9)
	{
		i += ft_putnbr(nbr / 10);
		i += ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchr(nbr + '0');
		i++;
	}
	return (i);
}
