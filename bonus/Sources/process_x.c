/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:30:04 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:09:01 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_x(t_flags *f, va_list args, char xX, int *cnt)
{
	int				number_of_loop;
	unsigned int	nb;
	int				nb_ele;

	f->space = 0;
	f->plus = 0;
	number_of_loop = 0;
	nb = va_arg(args, unsigned int);
	nb_ele = nb_of_ele_inhex(nb);
	number_of_loop = handle_cases(f, nb_ele, nb);
	print_spaces(number_of_loop, f, nb, cnt);
	number_of_loop = 0;
	if (f->precision > nb_ele)
		number_of_loop = f->precision - nb_ele;
	print_zeros(number_of_loop, f, nb, cnt);
	which_one_x_bigx(f, xX, cnt);
	if (!((f->point == 1) && (nb == 0) && (f->precision == 0)))
		print_hex(nb, xX, cnt);
}
