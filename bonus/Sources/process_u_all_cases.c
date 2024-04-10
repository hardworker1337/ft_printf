/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_u_all_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:14:21 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:00:03 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_u_all_cases(t_flags *f, va_list args, int *cnt)
{
	if (f->minus)
		process_u_minus(f, args, cnt);
	else
		process_u(f, args, cnt);
	initialize_flags(f);
}
