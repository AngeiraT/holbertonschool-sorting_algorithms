#include "sort.h"
/**
 * _swap - swap between 2 pointers of int
 *
 * @a: first int pointer
 * @b: second int pointer
 * Return: void
 */

void _swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - sort array of size with selection sorting
 * @array: int array to sort
 * @size: how big is the array?
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	unsigned int a, b, min_idx;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++) /*while through the array to find the small number */
	{
		min_idx = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min_idx])
				min_idx = b;
		}
		if (min_idx != a) /* swap */
		{
			_swap(&array[min_idx], &array[a]);
			print_array(array, size);
		}
	}
}

