#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go;

	if (list == NULL)
		return (NULL);


