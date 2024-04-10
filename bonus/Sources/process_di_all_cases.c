/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_di_all_cases.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:34:50 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 00:01:26 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_di_all_cases(t_flags *f, va_list args, int *cnt)
{
	if (f->minus)
		process_di_minus(f, args, cnt);
	else
		process_di(f, args, cnt);
	initialize_flags(f);
}
