/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:53:39 by dbouizem          #+#    #+#             */
/*   Updated: 2025/02/09 08:01:36 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_char(char c, t_printf *data)
{
	if (data->error)
		return ;
	if (write(1, &c, 1) == -1)
	{
		data->error = 1;
		return ;
	}
	data->total++;
}
