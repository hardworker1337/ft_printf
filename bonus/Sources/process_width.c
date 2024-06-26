/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:29:47 by bnafia            #+#    #+#             */
/*   Updated: 2024/04/13 20:39:07 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*process_width(t_flags *f, const char *s)
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
	f->width = res;
//	if (f->space)
//		f->width++;
	return (&((char *)s)[i]);
}
