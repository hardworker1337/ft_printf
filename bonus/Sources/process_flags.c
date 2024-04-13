/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:28:28 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/25 15:18:09 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*process_flags(t_flags *f, const char *format, va_list args, int *cnt)
{
	int	len;

	len = 5;
	while (ft_memchr("# 0+-", *format, len))
	{
		check_flags(f, *format);
		format++;
	}
	format = process_width(f, format);
	if (*format == '.')
	{
		f->point = 1;
		format = process_precision(f, ++format);
	}
	format = process_conversions(f, format, args, cnt);
	return ((char *)format);
}
