/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_cases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:54:54 by nafia             #+#    #+#             */
/*   Updated: 2024/03/20 14:37:55 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_cases(t_flags *f, int nb_element, long long nb)
{
	int	diff;

	if (f->width >= f->precision)
	{
		diff = f->width - f->precision;
		if (f->precision > nb_element)
		{
			if ((nb < 0 || f->plus) && !diff)
				return (f->width - f->precision + 1);
			else
				return (f->width - f->precision);
		}
		if (nb == 0 && f->point && !f->precision)
			return (f->width - f->precision);
		if (f->width > nb_element)
			return (f->width - nb_element);
	}
	if (nb < 0 || f->plus)
		return (1);
	return (0);
}
