/*
* Author: Robert Dragan
* Github: nucata
* Date: Sep 2022 22:20:12
* Description: This program returns the amount of times a specific integer is repeted in an array.
*/

#include <stdio.h>

int	repetition_counter(int *arr, int size, int searched_number) {
	int	index = 0;
	int	counter = 0;

	while (index < size) {
		if (arr[index] == searched_number)
			counter++;
		index++;
	}
	return (counter);
}

int	main(void) {
	int	arr[] = {1, 2, 1, 3, 4, 5};
	int	size = (int) sizeof(arr) / sizeof(int);
	printf("%d appears %d times in the array\n", 1, repetition_counter(arr, size, 1));
	printf("%d appears %d times in the array\n", -1, repetition_counter(arr, size, -1));
	printf("%d appears %d times in the array\n", 4, repetition_counter(arr, size, 4));
	return (0);
}

