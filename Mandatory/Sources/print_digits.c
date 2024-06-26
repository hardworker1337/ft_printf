/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:17:57 by bnafia            #+#    #+#             */
/*   Updated: 2024/04/10 22:20:52 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;
	
	count = write(1, &c, 1);
	return (count);
}

int	print_digits(long long nb)
{
	int	count;
	
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		count += print_digits(nb / 10);
		count += print_digits(nb % 10);
	}
	else
		count += ft_putchar(nb + '0');
	return (count);	
}
