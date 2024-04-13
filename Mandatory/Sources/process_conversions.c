/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:29:05 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/31 16:51:57 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_conversions(const char *s, va_list args)
{
	int	count;
	if (*s == 'd' || *s == 'i')
		count = process_di_all_cases(args);
	else if (*s == 'u')
		count = process_u_all_cases(args);
	else if (*s == 'x' || *s == 'X')
		count = process_x_all_cases(args, *s);
	else if (*s == 'p')
		count =process_p_all_cases(args, 'x');
	else if (*s == 'c')
		count = process_c_all_cases(args);
	else if (*s == 's')
		count =process_s_all_cases(args);
	else if (*s == '%')
		count = write(1, "%", 1);
	else
	{
		count = write(1, "%", 1);
		count += write(1, &s[0], 1);
		
	}
	return (count);
}
