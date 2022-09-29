/*
 * Author: Robert Dragan
 * Date: 29-09-2022
 * Description: Program that returns the smalles value in the array.
*/

#include <stdio.h>

int	min(int *arr, int size) {
	int	min;
	int	index;

	min = arr[0];
	while (index < size) {
		if (arr[index] < min)
			min = arr[index];
		index++;
	}
	return (min);
}

int	main(void) {
	int	list[] = {10, 4, 5, 7, 1, 0, -1};
	int	size = (int) (sizeof(list) / sizeof(int));
	printf("The smalles value in the array is: %d\n", min(list, size));
	return (0);
}
