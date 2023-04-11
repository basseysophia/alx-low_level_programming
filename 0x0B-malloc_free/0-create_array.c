#include "main.h"

/**
 * create_ array - create   an array of char
 * and initialize it with
 * speciic char
 * @size: size of the array
 * @c: the value of the array
 * return: Null if the memory fail
 * otherwise: 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}

