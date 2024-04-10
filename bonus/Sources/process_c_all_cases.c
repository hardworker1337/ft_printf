/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_c_all_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 23:58:20 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:10:19 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_c_all_cases(t_flags *f, va_list args, int *cnt)
{
	if (f->minus)
		process_c_minus(f, args, cnt);
	else
		process_c(f, args, cnt);
	initialize_flags(f);
}
