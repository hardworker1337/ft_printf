/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_p_all_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:42:13 by nafia             #+#    #+#             */
/*   Updated: 2024/03/31 16:57:51 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_p_all_cases(t_flags *f, va_list args, char xX, int *cnt)
{
	f->address = 2;
	if (f->minus)
		process_p_minus(f, args, xX, cnt);
	else
		process_p(f, args, xX, cnt);
	initialize_flags(f);
}
