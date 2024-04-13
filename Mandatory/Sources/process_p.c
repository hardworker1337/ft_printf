/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:45:23 by nafia             #+#    #+#             */
/*   Updated: 2024/04/11 08:51:46 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;
	
	count = write(1, &c, 1);
	return (count);
}

int	process_p(va_list args, char xX)
{
	long unsigned int	nb;
	int	count;
	
	count = 0;	
	nb = (long unsigned int)va_arg(args, void *);
	if (nb == 0)
	{
		count = ft_putstr("(nil)");
	}
	else
	{
		count += ft_putchar('0');
		count += ft_putchar('x');
		count += print_hex(nb, xX);
	}
	return (count);
}
