/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spaces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:19:57 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/25 15:16:44 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_dash_address(int *iter, t_flags *f, long long nb)
{
	if ((f->dash && f->dash > *iter) || (f->address && f->address > *iter))
		*iter = 0;
	if (f->dash && f->dash < *iter)
		*iter -= f->dash;
	if (f->address && f->address < *iter)
	{
		if (nb == 0)
			*iter -= 4;
		else
			*iter -= f->address;
	}
}

static void	handle_sign(long long nb, int *cnt)
{
	if (nb >= 0)
		*cnt += write(1, "+", 1);
	else
		*cnt += write(1, "-", 1);
}

static void	handle_other_cases(int *iter, t_flags *f, long long nb,
		char *space_or_zero)
{
	if (f->zero && !f->point)
		*space_or_zero = '0';
	if (f->minus && nb != 0 && !f->address)
		(*iter)--;
}

void	print_spaces(int iter, t_flags *f, long long nb, int *cnt)
{
	int		i;
	int		pos;
	char	space_or_zero;

	space_or_zero = ' ';
	pos = iter;
	i = 0;
	if ((f->plus || nb < 0) && !f->space)
	{
		pos = iter - 1;
		if (f->zero && !f->point)
			pos = 0;
	}
	handle_other_cases(&iter, f, nb, &space_or_zero);
	handle_dash_address(&iter, f, nb);
	while (i < iter)
	{
		if (pos == i)
			handle_sign(nb, cnt);
		else
			*cnt += write(1, &space_or_zero, 1);
		i++;
	}
}
