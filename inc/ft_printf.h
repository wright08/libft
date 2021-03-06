/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 05:20:31 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:52:11 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# define ANY2(x, y1, y2)		((x) == (y1) || (x) == (y2))
# define ANY3(x, y1, y2, y3)	((x) == (y1) || (x) == (y2) || (x) == (y3))

struct					s_conv
{
	char			flags[6 + 1];
	int				width;
	int				precision;
	char			len_mod[2 + 1];
	char			type;
	char			*str;
	int				len;
	char			*lead;
	int				lead_len;
};
typedef struct s_conv	t_conv;

typedef int				(*t_convf)(t_conv *conv, va_list ap);

struct					s_table
{
	const char		*keys;
	const t_convf	func;
};
typedef struct s_table	t_able;

enum	e_field			{STR, LEAD};
typedef enum e_field	t_field;

void					free_swap(t_conv *conv, char *fix, t_field field);
int						has(char *field, char *str);
void					leader(t_conv *conv);
void					zero(t_conv *conv, int n);
void					width(t_conv *conv);
int						print(t_conv *conv);

int						conv_char(t_conv *conv, va_list ap);
int						conv_float(t_conv *conv, va_list ap);
int						conv_int(t_conv *conv, va_list ap);
int						conv_mod(t_conv *conv, va_list ap);
int						conv_ptr(t_conv *conv, va_list ap);
int						conv_str(t_conv *conv, va_list ap);
int						conv_uint(t_conv *conv, va_list ap);

void					parse_fmt(t_conv *conv, const char **fmt, va_list ap);

#endif
