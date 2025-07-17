/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 01:21:38 by dbouizem          #+#    #+#             */
/*   Updated: 2025/07/17 17:22:16 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>//Test
# include <limits.h>//Test
# include <stdint.h>//pour utiliser uintmax_t/intmax_t/uintptr_t
# include <stddef.h>//ptrdiff_t

# define DIGITS "0123456789"
# define HEXLOW "0123456789abcdef"
# define HEXUPP "0123456789ABCDEF"

typedef struct s_printf
{
	int			total;
	int			error;
	va_list		args;
}		t_printf;

/*Functions*/
int			ft_printf(const char *formant, ...);

void		parse_format(const char **format, t_printf *data);

void		ft_print_char(char c, t_printf *data);
void		ft_print_str(char *s, t_printf *data);
void		ft_print_ptr(void *ptr, t_printf *data);
void		ft_print_int(int n, t_printf *data);
void		ft_print_u_int(unsigned int n, t_printf *data);
void		ft_print_hex(unsigned int n, int uppercase, t_printf *data);

#endif
