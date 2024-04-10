/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:55:36 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/21 14:57:59 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;

	count = write(1, &c, 1);
	return (count);
}

int	ft_putstr(const char *s)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (s[i])
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}
