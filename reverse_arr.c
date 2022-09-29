/*
* Author: Robert Dragan
* Github: nucata
* Date: 29 Sep 2022 22:40:23
* Description: This program reverses a given array.
*/

#include <stdio.h>

void	reverse_arr(int *arr, int size) {
	int	index = 0;
	int	temp;

	while (index < size / 2) {
		temp = arr[index];
		arr[index] = arr[size - 1 - index];
		arr[size - 1 - index] = temp;
		index++;
	}
}
	

int	main(void) {
	int	arr[] = {1, 2, 3, 4};
	int	size = (int) sizeof(arr) / sizeof(int);

	reverse_arr(arr, size);
	for (int i = 0; i < size; i++)
		printf("%d", arr[i]);
	printf("\n");
	return (0);
}

