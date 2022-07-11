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
		{'d', print_num},
		{'i', print_num}
	};
	int i = 0;

	while (i < 4)
	{
		if (pec[i].spec == s)
			return (pec[i].f);
		i++;
	}
	return (NULL);
}
