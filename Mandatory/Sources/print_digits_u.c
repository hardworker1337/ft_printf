/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digits_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:47:19 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/21 14:43:01 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_putchar(char c)
{
        int     count;
	
	count = write(1, &c, 1);
        return (count);
}

int	print_digits_u(unsigned int nb)
{
	int	count;
	
	count = 0;
	if (nb > 9)
	{
		count += print_digits(nb / 10);
		count += print_digits(nb % 10);
	}
	else
		count = ft_putchar(nb + '0');
	return (count);
}
