/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spaces_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:21:31 by nafia             #+#    #+#             */
/*   Updated: 2024/03/24 07:13:15 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_spaces_c(int iter, int *cnt)
{
	int	i;

	i = 0;
	while (i < iter)
	{
		*cnt += write(1, " ", 1);
		i++;
	}
}