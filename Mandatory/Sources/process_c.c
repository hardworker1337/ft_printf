/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:01:40 by nafia             #+#    #+#             */
/*   Updated: 2024/03/21 14:54:21 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;
	
	count = write(1, &c, 1);
	return (count);
}

int	process_c(va_list args)
{
	char	ch;
	int	count;
	
	count = 0;
	ch = va_arg(args, signed int);
	count = ft_putchar(ch);
	return (count);
}
