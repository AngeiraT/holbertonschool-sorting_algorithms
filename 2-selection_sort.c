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
  for (int step = 0; step < size - 1; step++) 
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) 
    {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    _swap(&array[min_idx], &array[step]);
  }
}