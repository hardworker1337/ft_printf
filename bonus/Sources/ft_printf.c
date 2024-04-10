/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:07:34 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/24 07:24:27 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	t_flags	*f;
	int	count;
	
	f = (t_flags *)malloc(sizeof(t_flags));
	if (!f)
		return (-1);
	initialize_flags(f);
	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format = process_flags(f, ++format, args, &count);
		}
		else
		{
			count += write(1, format, 1);
		}
		++format;
	}
	va_end(args);
	free(f);
	return (count);
}
