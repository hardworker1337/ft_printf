/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_zeros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:18:41 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/23 23:51:56 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_zeros(int iter, t_flags *f, long long nb, int *cnt)
{
	int	i;

	i = 0;
	if (f->minus)
	{
		if (f->minus && nb < 0)
			*cnt += write(1, "-", 1);
		else if (f->minus && f->plus && nb != 0)
			*cnt += write(1, "+", 1);
		else
			f->minus = 0;
	}
	while (i < iter)
	{
		*cnt += write(1, "0", 1);
		i++;
	}
	//return (0);
}
