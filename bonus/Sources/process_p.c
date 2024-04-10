/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:45:23 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 06:54:22 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_p(t_flags *f, va_list args, char xX, int *cnt)
{
	int					number_of_loop;
	long unsigned int	nb;
	int					nb_ele;

	f->precision = 0;
	f->zero = 0;
	f->dash = 0;
	f->space = 0;
	f->plus = 0;
	number_of_loop = 0;
	nb = (long unsigned int)va_arg(args, void *);
	nb_ele = nb_of_ele_inhex(nb);
	number_of_loop = handle_cases(f, nb_ele, nb);
	print_spaces(number_of_loop, f, nb, cnt);
	if (nb != 0)
		which_one_x_bigx(f, xX, cnt);
	if (nb == 0)
	{
		ft_putstr("(nil)", cnt);
	}
	else if (!((f->point == 1) && (nb == 0) && (f->precision == 0)))
		print_hex(nb, xX, cnt);
}
