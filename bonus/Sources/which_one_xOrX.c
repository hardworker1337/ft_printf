/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_one_xOrX.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:48:59 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 06:51:16 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;
	
	count = write(1, &c, 1);
	return (count);
}

void	which_one_x_bigx(t_flags *f, char xX, int *cnt)
{
	if (xX == 'x' && f->dash)
	{
		*cnt += ft_putchar('0');
		*cnt += ft_putchar('x');
	}
	if (xX == 'X' && f->dash)
	{
		*cnt += ft_putchar('0');
		*cnt += ft_putchar('X');
	}
	if (xX == 'x' && f->address)
	{
		*cnt += ft_putchar('0');
		*cnt += ft_putchar('x');
	}
}
