/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:19:29 by nafia             #+#    #+#             */
/*   Updated: 2024/03/21 14:56:33 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

int	process_s(va_list args)
{
	int			nb_ele;
	const char	*str;
	int			count;
	
	nb_ele = 0;
	str = va_arg(args, char *);
	if (str == NULL && nb_ele == 0)
	{
		str = "(null)";
	}
	nb_ele = ft_strlen(str);
	count = ft_putstr(str);
	return (count);
}
