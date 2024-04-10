/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_di_all_cases.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:34:50 by nafia             #+#    #+#             */
/*   Updated: 2024/03/21 14:18:44 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_di_all_cases(va_list args)
{
	int	count;
	
	count = process_di(args);
	return (count);
}
