// [V511. The sizeof() operator returns pointer size instead of array size.] https://pvs-studio.com/en/docs/warnings/v511/

#include <cstddef>
#include <stdio.h>

/**
 * Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
 * The pass through the list is repeated until the list is sorted.
 * The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list.
 * It is not the most efficient algorithm, but it is a good example of how a simple algorithm can be implemented.
 */
void bubbleSort(int arr[], size_t size)
{

	int temp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// return arr;
}

void bubbleSortExample()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	size_t n = sizeof(arr) / sizeof(arr[0]);
	printf("Before sorting the array: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	for (int item : arr)
	{
		printf("%d ", item);
	}
	printf("\n");
}