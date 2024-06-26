/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:16:56 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/21 14:47:04 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;
	
	count = write(1, &c, 1);
	return (count);
}

int	print_hex(long unsigned int nb, char xX)
{
	int	count;
	
	count = 0;
	if (nb > 15)
	{
		count += print_hex(nb / 16, xX);
		count += print_hex(nb % 16, xX);
	}
	else
	{
		if (xX == 'X')
			count = ft_putchar("0123456789ABCDEF"[nb]);
		if (xX == 'x')
			count = ft_putchar("0123456789abcdef"[nb]);
	}
	return (count);
}
