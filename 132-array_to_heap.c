#include "binary_trees.h"
/**
 * array_to_heap - Turns an array to a tree.
 *
 * @array: Array to be transformed.
 * @size: Size of the array.
 * Return: The tree of the array.
 */

heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
	{
		heap_insert(&root, array[i]);
	}
	return (root);
}
