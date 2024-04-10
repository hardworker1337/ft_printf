/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_of_ele_inhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:14:54 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/20 14:42:16 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nb_of_ele_inhex(long unsigned int nb)
{
	int	nb_element;

	nb_element = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 16;
		nb_element++;
	}
	return (nb_element);
}
