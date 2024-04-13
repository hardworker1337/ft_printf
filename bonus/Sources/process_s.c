/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:19:29 by nafia             #+#    #+#             */
/*   Updated: 2024/03/25 15:27:13 by bnafia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//static int	ft_strlen(const char *s)
//{
//	int	i;
//
//	i = 0;
//	while (*s)
//	{
//		s++;
//		i++;
//	}
//	return (i);
//}
//
void	process_s(t_flags *f, va_list args, int *cnt)
{
	int			nb_ele;
	const char	*str;

	f->space = 0;
	f->plus = 0;
	f->dash = 0;
	f->zero = 0;
	nb_ele = 6;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		if (f->point)
			f->point = NULL_EXIST;
	}
	nb_ele = ft_strlen(str);
	if (!((f->width == 0) && (f->precision == 0) && (f->point)))
	{
		print_spaces_s(f, nb_ele, str, cnt);
		print_str(f, nb_ele, str, cnt);
	}
}
