/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_xX_all_cases.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:10:58 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:08:21 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_x_all_cases(t_flags *f, va_list args, char xX, int *cnt)
{
	if (f->minus)
		process_x_minus(f, args, xX, cnt);
	else
		process_x(f, args, xX, cnt);
	initialize_flags(f);
}
