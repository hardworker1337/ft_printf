/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_di_minus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:30:55 by nafia             #+#    #+#             */
/*   Updated: 2024/04/13 20:52:56 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_di_minus(t_flags *f, va_list args, int *cnt)
{
	int	number_of_loop;
	int	nb;
	int	nb_ele;

	number_of_loop = 0;
	nb = va_arg(args, int);
	nb_ele = nb_of_ele_indigit(nb);
	if (f->precision > nb_ele)
		number_of_loop = f->precision - nb_ele;
	print_zeros(number_of_loop, f, nb, cnt);
	if (!((f->point == 1) && (nb == 0) && (f->precision == 0)))
		print_digits(nb, cnt);
	number_of_loop = 0;
	if (f->space && nb >= 0)
		number_of_loop  = 1;
	else
		number_of_loop = handle_cases(f, nb_ele, nb);
	print_spaces(number_of_loop, f, nb, cnt);
}
