#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;
	
	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return mid;
		if (value < array[mid])
			right = mid - 1;
		
		else
			left = mid + 1;
	}
	
	return (-1);
}
