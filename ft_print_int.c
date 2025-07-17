/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:29:12 by dbouizem          #+#    #+#             */
/*   Updated: 2025/07/17 15:39:00 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>

char	*ft_itoa(int n)
{
	static char	buffer[12];
	int			i;
	long		nb;

	nb = n;
	i = 11;
	buffer[i--] = '\0';
	if (nb == 0)
	{
		buffer[i] = '0';
		return (&buffer[i]);
	}

	if (nb < 0)
	{
		nb = -nb;
		while (nb > 0)
		{
			buffer[i--] = (nb % 10) + '0';
			nb /= 10;
		}
		buffer[i--] = '-';
	}
	else
	{
		while (nb > 0)
		{
			buffer[i--] = (nb % 10) + '0';
			nb /= 10;
		}
	}
	return (&buffer[i + 1]);
}

void	ft_print_int(long n, t_printf *data)
{
	char		*str;

	str = ft_itoa((int)n);
	if (!str)
	{
		data->error = 1;
		return ;
	}
	ft_print_str(str, data);
}
