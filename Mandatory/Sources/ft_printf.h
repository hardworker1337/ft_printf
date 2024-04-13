/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:03:59 by bnafia            #+#    #+#             */
/*   Updated: 2024/03/21 15:01:57 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define HANDLE_NULL_PRINT 6
# define NULL_EXIST 3

int	ft_putstr(const char *s);
int	ft_printf(const char *format, ...);
int	nb_of_ele_indigit(long long nb);
int	nb_of_ele_inhex(long unsigned int nb);
int	print_digits(long long nb);
int	print_digits_u(unsigned int nb);
int	process_di(va_list args);
int	process_di_all_cases(va_list args);
int	process_u(va_list args);
int	process_u_all_cases(va_list args);
int	process_x(va_list args, char xX);
int	process_x_all_cases(va_list args, char xX);
int	process_p(va_list args, char xX);
int	process_p_all_cases(va_list args, char xX);
int	process_c(va_list args);
int	process_c_all_cases(va_list args);
int	process_s(va_list args);
int	process_s_all_cases(va_list args);
int	print_hex(long unsigned int nb, char xX);
int	process_conversions(const char *s, va_list args);
int	process_flags(const char *format, va_list args);
#endif
