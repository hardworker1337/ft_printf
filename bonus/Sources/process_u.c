/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:21:06 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:00:43 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_u(t_flags *f, va_list args, int *cnt)
{
	int				number_of_loop;
	unsigned int	nb;
	int				nb_ele;

	f->space = 0;
	f->plus = 0;
	number_of_loop = 0;
	nb = va_arg(args, unsigned int);
	nb_ele = nb_of_ele_indigit(nb);
	number_of_loop = handle_cases(f, nb_ele, nb);
	print_spaces(number_of_loop, f, nb, cnt);
	number_of_loop = 0;
	if (f->precision > nb_ele)
		number_of_loop = f->precision - nb_ele;
	print_zeros(number_of_loop, f, nb, cnt);
	if (!((f->point == 1) && (nb == 0) && (f->precision == 0)))
		print_digits_u(nb, cnt);
}
