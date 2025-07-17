#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_printf.h"

// Fonction de comparaison (si tu veux automatiser plus tard)
void	run_test(const char *label, const char *format, ...)
{
	va_list ap1, ap2;
	int ret1, ret2;

	printf("=== %s ===\n", label);

	va_start(ap1, format);
	va_copy(ap2, ap1);

	ret1 = vprintf(format, ap1);
	printf(" [ret: %d]\n", ret1);

	ret2 = ft_printf(format, ap2);
	printf(" [ft_ret: %d]\n", ret2);

	if (ret1 != ret2)
		printf(" ❌ [DIFF RETURN VALUE]\n\n");
	else
		printf(" ✅ [OK]\n\n");

	va_end(ap1);
	va_end(ap2);
}

int	main(void)
{
	char	*str = "42";
	char	*null_str = NULL;
	void	*ptr = &str;
	void	*null_ptr = NULL;
	int		neg = -42;
	int		pos = 1234;
	unsigned int u = UINT_MAX;

	// %c
	run_test("Char A", "char: [%c]\n", 'A');
	run_test("Char zero", "char: [%c]\n", 0);

	// %s
	run_test("String", "string: [%s]\n", str);
	run_test("String NULL", "string null: [%s]\n", null_str);
	run_test("String vide", "string vide: [%s]\n", "");

	// %d et %i
	run_test("Int positif", "int: [%d]\n", pos);
	run_test("Int negatif", "int: [%d]\n", neg);
	run_test("Int min", "int min: [%d]\n", INT_MIN);
	run_test("Int max", "int max: [%d]\n", INT_MAX);
	run_test("Int 0", "int zero: [%d]\n", 0);
	run_test("Int (i)", "int i: [%i]\n", neg);

	// %u
	run_test("Unsigned", "unsigned: [%u]\n", u);
	run_test("Unsigned 0", "unsigned: [%u]\n", 0);

	// %x / %X
	run_test("Hex minuscule", "hex: [%x]\n", 305441741);
	run_test("Hex majuscule", "HEX: [%X]\n", 305441741);
	run_test("Hex 0", "hex 0: [%x]\n", 0);

	// %p
	run_test("Pointer", "ptr: [%p]\n", ptr);
	run_test("NULL pointer", "null ptr: [%p]\n", null_ptr);

	// %%
	run_test("Percent", "pourcentage: [%%]\n");

	// MIX
	run_test("Mix", "Salut %s, nb: %d, u: %u, x: %x, p: %p, c: %c, %%\n", str, neg, u, 255, ptr, 'Z');

	return (0);
}
