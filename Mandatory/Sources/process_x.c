/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:30:04 by nafia             #+#    #+#             */
/*   Updated: 2024/03/21 15:03:35 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_x(va_list args, char xX)
{
	unsigned int	nb;
	int	count;
	nb = va_arg(args, unsigned int);
	count = print_hex(nb, xX);
	return (count);
}
