#include "function_pointers.h"

/**
 * print_name - Prints the name passed as parameter.
 *
 * @name: char*
 * @f: void (*f)(char *)
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
