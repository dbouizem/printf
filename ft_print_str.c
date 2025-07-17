/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:57:50 by dbouizem          #+#    #+#             */
/*   Updated: 2025/07/17 19:12:51 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *str, t_printf *data)
{
	if (data->error)
		return ;
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	data->total += ft_strlen(str);
}
