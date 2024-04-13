/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_s_all_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:18:36 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:14:33 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	process_s_all_cases(t_flags *f, va_list args, int *cnt)
{
	if (f->minus)
		process_s_minus(f, args, cnt);
	else
		process_s(f, args, cnt);
	initialize_flags(f);
}
