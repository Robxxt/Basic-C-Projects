/*
* Author: Robert Dragan
* Github: nucata
* Date:  
* Description: Rotate an array to one index to the left.
*/

#include <stdio.h>

void	rotate_left(int	*arr, size_t size) {
	int	tmp = arr[0];
	int	len = (int) size;
	int	i = 0;

	while (i < len - 1) {
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
}

int	test(int *out, int *test, size_t size) {
	int	len = (int) size;
	int	i = 0;

	while (i < len) {
		if (!(out[i] == test[i])) {
			printf("# Test Failed!\n");
			return (0);
		}
		i++;
	}
	printf("# Test Succeed!\n");
	return (0);
}

int	main(void) {
	int	a1[] = {3, 9, 8, 1, 7, 6};
	int	test1[] = {9, 8, 1, 7, 6, 3};
	size_t	s1 = sizeof(a1) / sizeof(int);

	rotate_left(a1, s1);
	test(a1, test1, s1);
	return (0);
}

