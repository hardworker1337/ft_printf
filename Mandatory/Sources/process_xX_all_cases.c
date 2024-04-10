/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_xX_all_cases.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:10:58 by nafia             #+#    #+#             */
/*   Updated: 2024/03/21 14:44:09 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_x_all_cases(va_list args, char xX)
{
	int	count;
	
	count = process_x(args, xX);
	return (count);
}
