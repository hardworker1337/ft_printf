/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:55:36 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/24 06:47:53 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	int	count;

	count = write(1, &c, 1);
	return (count);
}

void	ft_putstr(const char *s, int *cnt)
{
	int	i;

	i = 0;
	while (s[i])
	{
		*cnt += ft_putchar(s[i]);
		i++;
	}
}
