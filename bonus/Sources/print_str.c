/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:35:18 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:18:43 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;

	count = write(1, &c, 1);
	return (count);
}

void	print_str(t_flags *f, int nb_element, const char *s, int *cnt)
{
	int	iter;
	int	i;

	if ((f->precision != 0 && f->point != NULL_EXIST)
		|| f->precision >= HANDLE_NULL_PRINT)
	{
		iter = f->precision;
		if (f->precision > nb_element)
			iter = nb_element;
		i = 0;
		while (iter--)
		{
			*cnt += ft_putchar(s[i]);
			i++;
		}
	}
	if (f->precision == 0 && f->point == 0 && f->width != 0)
		ft_putstr(s, cnt);
	if (f->precision == 0 && f->point == 0 && f->width == 0)
		ft_putstr(s, cnt);
}
