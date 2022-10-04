/*
* Author: Robert Dragan
* Github: nucata
* Date: 04-10-2022 
* Description: Rotate an array one or n indexes to the left.
*/

#include <stdio.h>

void	rotate_one_left(int *arr, size_t size) {
	int	tmp = arr[0];
	int	len = (int) size;
	int	i = 0;

	while (i < len - 1) {
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
}

void	rotate_n_left(int *arr, size_t size, int n) {
	while (n > 0) {
		rotate_one_left(arr, size);
		n--;
	}
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
	int	a2[] = {1, 2, 3, 4, 5};
	int	t1[] = {9, 8, 1, 7, 6, 3};
	int	t2[] = {3, 4, 5, 1, 2};
	size_t	s1 = sizeof(a1) / sizeof(int);
	size_t	s2 = sizeof(a2) / sizeof(int);

	rotate_one_left(a1, s1);
	rotate_n_left(a2, s2, 2);
	test(a1, t1, s1);
	test(a2, t2, s2);
	return (0);
}

