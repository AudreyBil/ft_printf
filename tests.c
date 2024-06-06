/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abillote <abillote@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:00:54 by abillote          #+#    #+#             */
/*   Updated: 2023/12/05 12:56:21 by abillote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include <stdio.h>

int main(void)
{
	printf("\n***FT_PRINTF VS PRINTF - TEST 1***\n\n");

	printf("Test 1 - ft_printf - no special case: ");
	fflush(stdout);
	int ft_printf_normal = ft_printf("'This is a normal input'\n");
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 1 - printf - no special case: ");
	int printf_normal = printf("'This is a normal input'\n");
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 2***\n\n");

	int c = 'a';
	printf("Test 2 - ft_printf - print a character: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%c'\n", c);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 2 - printf - print a character: ");
	printf_normal = printf("'%c'\n", c);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);


	printf("\n***FT_PRINTF VS PRINTF - TEST 3***\n\n");

	char *s = "this is a string";
	printf("Test 3 - ft_printf - print a string: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%s'\n", s);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 3 - printf - print a string: ");
	printf_normal = printf("'%s'\n", s);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 4***\n\n");

	printf("Test 4 - ft_printf - print a percent: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%%'\n");
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 4 - printf - print a percent: ");
	printf_normal = printf("'%%'\n");
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 5***\n\n");

	void *ptr = &c;
	printf("Test 5 - ft_printf - print a void pointer in hexadecimal: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%p'\n", ptr);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 5 - printf - print a void pointer in hexadecimal: ");
	printf_normal = printf("'%p'\n", ptr);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 6***\n\n");

	int d = -34;
	printf("Test 6 - ft_printf - print a decimal (base 10) number: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%d'\n", d);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 6 - printf - print a decimal (base 10) number: ");
	printf_normal = printf("'%d'\n", d);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 7***\n\n");

	int i = 4551540;
	printf("Test 7 - ft_printf - print an integer (base 10): ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%i'\n", i);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 7 - printf - print an integer (base 10): ");
	printf_normal = printf("'%i'\n", i);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 8***\n\n");

	unsigned int u = 4294967295;
	printf("Test 8 - ft_printf - print an unsigned decimal (base 10): ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%u'\n", u);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 8 - printf - print an unsigned decimal (base 10): ");
	printf_normal = printf("'%u'\n", u);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);


	printf("\n***FT_PRINTF VS PRINTF - TEST 9***\n\n");

	int uhexa = 164;
	printf("Test 9 - ft_printf - print a number in hexa lower: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%x'\n", uhexa);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 9 - printf - print a number in hexa lower: ");
	printf_normal = printf("'%x'\n", uhexa);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 10***\n\n");

	printf("Test 10 - ft_printf - print a number in hexa upper: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("'%X'\n", uhexa);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 10 - printf - print a number in hexa upper: ");
	printf_normal = printf("'%X'\n", uhexa);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 11***\n\n");

	printf("Test 11 - ft_printf - print when the input is NULL: ");
	fflush(stdout);
	ft_printf_normal = ft_printf(" NULL %s NULL ", NULL);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 11 - printf - print when the input is NULL: ");
	printf_normal = printf(" NULL %s NULL ", NULL);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***FT_PRINTF VS PRINTF - TEST 12***\n\n");

	printf("Test 12 - ft_printf - print when ptr = 0: ");
	fflush(stdout);
	ft_printf_normal = ft_printf(" %p %p \n", 0, 0);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 12 - printf - print when ptr = 0: ");
	printf_normal = printf(" %p %p \n", 0, 0);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);

	printf("\n***BONUS - FT_PRINTF VS PRINTF - TEST 13***\n\n");

	printf("Test 13 - ft_printf - print with '-' flag: ");
	fflush(stdout);
	ft_printf_normal = ft_printf("%b\n", 123);
	fflush(stdout);
	printf("Return value of ft_printf : %d\n", ft_printf_normal);
	printf("Test 12 - printf - print with '-' flag: ");
	printf_normal = printf("%b\n", 123);
	printf("Return value of printf : %d\n", printf_normal);

	if(ft_printf_normal == printf_normal)
		printf("***SUCCESS***\n\n");
	else
		printf("***ERROR***\n\n");
	fflush(stdout);
}
