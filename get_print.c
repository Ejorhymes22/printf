#include "main.h"
#include <stddef.h>

/**
 * get_print - is a function pointer that points to the function
 * that corrolates with the character in format
 * @s: the character
 * @list: the arguments
 *
 * Return: pointer to the function
 */

int (*get_print(char s))(va_list list)
{
	spec_t pec[] = {
		{'s', print_string},
		{'c', print_char},
	};
	int i = 0;

	while (i < 2)
	{
		if (pec[i].spec == s)
			return (pec[i].f);
		i++;
	}
	return (NULL);
}
