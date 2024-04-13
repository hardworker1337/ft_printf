/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_of_ele_indigit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:20:53 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/20 14:41:33 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nb_of_ele_indigit(long long nb)
{
	int	nb_element;

	nb_element = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
	}
	while (nb)
	{
		nb = nb / 10;
		nb_element++;
	}
	return (nb_element);
}
