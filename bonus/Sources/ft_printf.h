/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:03:59 by bnafia            #+#    #+#             */
/*   Updated: 2024/04/13 03:07:21 by nafia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../../libft/libft.h"

# define HANDLE_NULL_PRINT 6
# define NULL_EXIST 3

typedef struct flag
{
	int	dash;
	int	space;
	int	zero;
	int	minus;
	int	plus;
	int	width;
	int	precision;
	int	point;
	int	address;
	int	p_null;

}		t_flags;

void	print_str(t_flags *f, int nb_elment, const char *s, int *cnt);
void	print_spaces_s(t_flags *f, int nb_element, const char *str, int *cnt);
void	print_spaces_c(int iter, int *cnt);
void	which_one_x_bigx(t_flags *f, char c, int *cnt);
void	ft_putstr(const char *s, int *cnt);
int		handle_cases(t_flags *f, long long nb_element, long long nb);
void	initialize_flags(t_flags *f);
int		ft_printf(const char *format, ...);
int		nb_of_ele_indigit(long long nb);
int		nb_of_ele_inhex(long unsigned int nb);
void	print_spaces(int iter, t_flags *f, long long nb, int *cnt);
void	print_zeros(int iter, t_flags *f, long long nb, int *cnt);
int		print_digits(long long nb, int *cnt);
int		print_digits_u(unsigned int nb, int *cnt);
char	*process_precision(t_flags *f, const char *s);
char	*process_width(t_flags *f, const char *s);
void	process_di(t_flags *f, va_list args, int *cnt);
void	process_di_minus(t_flags *f, va_list args, int *cnt);
void	process_di_all_cases(t_flags *f, va_list args, int *cnt);
void	process_u(t_flags *f, va_list args, int *cnt);
void	process_u_minus(t_flags *f, va_list args, int *cnt);
void	process_u_all_cases(t_flags *f, va_list args, int *cnt);
void	process_x(t_flags *f, va_list args, char xX, int *cnt);
void	process_x_minus(t_flags *f, va_list args, char xX, int *cnt);
void	process_x_all_cases(t_flags *f, va_list args, char xX, int *cnt);
void	process_p(t_flags *f, va_list args, char xX, int *cnt);
void	process_p_minus(t_flags *f, va_list args, char xX, int *cnt);
void	process_p_all_cases(t_flags *f, va_list args, char xX, int *cnt);
void	process_c(t_flags *f, va_list args, int *cnt);
void	process_c_minus(t_flags *f, va_list args, int *cnt);
void	process_c_all_cases(t_flags *f, va_list args, int *cnt);
void	process_s(t_flags *f, va_list args, int *cnt);
void	process_s_minus(t_flags *f, va_list args, int *cnt);
void	process_s_all_cases(t_flags *f, va_list args, int *cnt);
int	print_hex(long unsigned int nb, char xX, int *cnt);
char	*process_conversions(t_flags *f, const char *s, va_list args, int *cnt);
void	check_flags(t_flags *f, char c);
char	*process_flags(t_flags *f, const char *format, va_list args, int *cnt);
#endif
