/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:07:16 by nafia             #+#    #+#             */
/*   Updated: 2024/03/21 14:19:46 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_di(va_list args)
{
	int	nb;
	int	count;
	
	nb = va_arg(args, int);
	count = print_digits(nb);
	return (count);
}
