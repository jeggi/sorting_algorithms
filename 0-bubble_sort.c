#include "sort.h"
/**
 * bubble_sort - This sort array lements from min to max value
 * @array: This is array
 * @size: This is the array size
 */
void bubble_sort(int *arrays, size_t size1)
{

	size_t s, index, tmp = 0;

	if (size1 < 2)
		return;
	for (s = 0; s < size1; s++)
		for (index = 0; index < size1; index++)
		{
			if (arrays[index] > arrays[index + 1] && arrays[index + 1])
			{
			tmp = arrays[index];
			arrays[index] = arrays[index + 1];
			arrays[index + 1] = tmp;
			print_array(arrays, size1);
			}
		}
}
