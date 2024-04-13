/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:30:46 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/25 15:18:38 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*process_precision(t_flags *f, const char *s)
{
	int			i;
	long long	res;
	int			tmp;

	i = 0;
	tmp = 2147483647;
	res = 0;
	while (ft_isdigit(s[i]))
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	if (res > tmp)
		return (NULL);
	f->precision = res;
	return (&((char *)s)[i]);
}
