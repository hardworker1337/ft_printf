/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spaces_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:29:36 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:16:59 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_spaces_s(t_flags *f, int nb_element, const char *str, int *cnt)
{
	int	i;
	int	smallone;

	i = 0;
	smallone = f->precision;
	if (*str == '\0')
		i = f->width;
	else if (f->point == NULL_EXIST && f->precision < HANDLE_NULL_PRINT)
		i = f->width;
	else if (f->point)
	{
		if (f->precision >= nb_element)
			smallone = nb_element;
		if (f->width >= smallone)
			i = f->width - smallone;
	}
	else if (!f->point && f->width)
		if (f->width > nb_element)
			i = f->width - nb_element;
	while (i)
	{
		*cnt += write(1, " ", 1);
		i--;
	}
}
