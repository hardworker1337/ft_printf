/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:27:48 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/20 14:32:01 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flags(t_flags *f, char c)
{
	if (c == '#')
		f->dash = 2;
	if (c == ' ')
		f->space = 1;
	if (c == '0')
		f->zero = 1;
	if (c == '-')
	{
		if (f->zero)
			f->zero = 0;
		f->minus = 1;
	}
	if (c == '+')
	{
		if (f->space)
			f->space = 0;
		f->plus = 1;
	}
}
