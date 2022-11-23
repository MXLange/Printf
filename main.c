/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mu <mu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:17:32 by mu                #+#    #+#             */
/*   Updated: 2022/11/23 19:24:45 by mu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	char c = 'i';
	char *s = "Vida de inseto";
	int i = -2147483648;
	unsigned int ui = 4294967295;
	unsigned int hex = 45632123;

	int returned = ft_printf("O char e: %c, a string e: %s, o pointer e: %p, o int e %d ou %i, o unsigned e %u, hexa minusculo e: %x, hexa maiusculo e: %X e o Porcento e: %%.", c, s, &i, i, i, ui, hex, hex);
	ft_printf("\n%i\n", returned);
	int returned2 = printf("O char e: %c, a string e: %s, o pointer e: %p, o int e %d ou %i, o unsigned e %u, hexa minusculo e: %x, hexa maiusculo e: %X e o Porcento e: %%.", c, s, &i, i, i, ui, hex, hex);
	printf("\n%i", returned2);
	return 0;
}
