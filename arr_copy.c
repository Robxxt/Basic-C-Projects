/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-2022 
* Description: Create a copy of an array.
*/

#include <stdio.h>	// printf
#include <stdlib.h>	//malloc

int	*cpy_arr(int *arr, int size) {
	int	*cpy = malloc(size * sizeof(int));
	int	index = 0;

	while (index < size) {
		cpy[index] = arr[index];
		index++;
	}
	return (cpy);
}

int	main(void) {
	int	a[] = {1, 2, 3, 4};
	int	size = (int) sizeof(a) / sizeof(int);
	int	*b = cpy_arr(a, size);

	for (int i = 0; i < 4; i++)
		printf("b[%d]: %d\t a[%d]: %d\n", i, b[i], i, a[i]);
	free(b);
	return (0);
}

