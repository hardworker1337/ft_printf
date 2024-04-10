/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_c_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:30:37 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:12:31 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;
	
	count = write(1, &c, 1);
	return (count);
}

void	process_c_minus(t_flags *f, va_list args, int *cnt)
{
	int		number_of_loop;
	char	ch;

	f->space = 0;
	f->plus = 0;
	f->precision = 0;
	f->zero = 0;
	f->dash = 0;
	number_of_loop = 0;
	ch = va_arg(args, signed int);
	if (f->width > 0)
		number_of_loop = f->width - 1;
	*cnt += ft_putchar(ch);
	print_spaces_c(number_of_loop, cnt);
}
