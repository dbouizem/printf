/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbouizem <djihane.bouizem@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:55:54 by dbouizem          #+#    #+#             */
/*   Updated: 2025/07/17 15:34:44 by dbouizem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int n = 42;
	int a = 42;
    int b = -42;
    int c = 0;

	printf("printf d: [%d]\n", a);
	ft_printf("ft_printf d: [%d]\n\n", a);

	printf("printf d négatif: [%d]\n", b);
	ft_printf("ft_printf d négatif: [%d]\n\n", b);

	printf("printf d zéro: [%d]\n", c);
	ft_printf("ft_printf d zéro: [%d]\n\n", c);

	printf("printf i: [%i]\n", a);
	ft_printf("ft_printf i: [%i]\n\n", a);

	printf("printf i négatif: [%i]\n", b);
	ft_printf("ft_printf i négatif: [%i]\n\n", b);

	ft_printf("%c\n", 'A');
 	printf("%c\n\n", 'A');

	ft_printf("%s\n", "hello");
 	printf("%s\n\n", "hello");

	ft_printf("%d\n", -42);
 	printf("%d\n\n", -42);

	ft_printf("%u\n", 42u);
 	printf("%u\n\n", 42u);

	ft_printf("%x\n", 255);
 	printf("%x\n\n", 255);

	ft_printf("%X\n", 255);
 	printf("%X\n\n", 255);

	ft_printf("%p\n", &n);
 	printf("%p\n\n", &n);

	ft_printf("%%\n");
	printf("%%\n\n");

	return (0);
}
