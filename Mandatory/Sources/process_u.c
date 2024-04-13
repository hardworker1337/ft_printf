/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:21:06 by nafia             #+#    #+#             */
/*   Updated: 2024/03/21 14:38:43 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_u(va_list args)
{
	unsigned int	nb;
	int	count;
	nb = va_arg(args, unsigned int);
	count = print_digits_u(nb);
	return (count);
}
