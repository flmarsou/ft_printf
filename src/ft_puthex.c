/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:38:53 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/14 10:16:57 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex(unsigned int nbr, char *base)
{
	unsigned int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_puthex(nbr / 16, base);
	}
	ft_putchr(base[nbr % 16]);
	i++;
	return (i);
}
