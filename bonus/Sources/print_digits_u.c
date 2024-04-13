/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digits_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:47:19 by bnafia            #+#    #+#             */
/*   Updated: 2024/04/11 20:25:51 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;

	count = write(1, &c, 1);
	return (count);
}

int	print_digits_u(unsigned int nb, int *cnt)
{
	int	count;
	
	count = 0;
	if (nb > 9)
	{
		print_digits_u(nb / 10, cnt);
		print_digits_u(nb % 10, cnt);
	}
	else
		count = ft_putchar(nb + '0');
	*cnt += count;
	return (*cnt);
}
