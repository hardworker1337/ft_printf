/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:29:05 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/31 17:00:06 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*process_conversions(t_flags *f, const char *s, va_list args, int *cnt)
{
	if (*s == 'd' || *s == 'i')
		process_di_all_cases(f, args, cnt);
	else if (*s == 'u')
		process_u_all_cases(f, args, cnt);
	else if (*s == 'x' || *s == 'X')
		process_x_all_cases(f, args, *s, cnt);
	else if (*s == 'p')
		process_p_all_cases(f, args, 'x', cnt);
	else if (*s == 'c')
		process_c_all_cases(f, args, cnt);
	else if (*s == 's')
		process_s_all_cases(f, args, cnt);
	else if (*s == '%')
	{
		*cnt += write(1, "%", 1);
		initialize_flags(f);
	}
	else
	{
		*cnt += write(1, "%", 1);
		*cnt += write(1, &s[0], 1);
	}
	return ((char *)s);
}
