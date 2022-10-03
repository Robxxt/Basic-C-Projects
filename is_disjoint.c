/*
* Author: Robert Dragan
* Github: nucata
* Date: 03-10-2022
* Description: Compares two arrays to see if they have any item in common.
*/

#include <stdio.h>	// printf
#include "functions.h"	//test_int
int	is_disjoint(int *arr1, int len1, int *arr2, int len2) {
	int	counter = 0;
	int	i = 0;
	int	j;

	while (i < len1) {
		j = 0;
		while (j < len2) {
			if (arr1[i] == arr2[j]) {
				return (1);
			}
			j++;
			counter++;
		}
		i++;
	}
	return (0);
}

int	main(void) {
	int	a[] = {1, 2, 3, 4};
	int	b[] = {5, 0, 6, 4};
	int	c[] = {4};
	int	d[] = {-1, -2, 5, 8};

	test_int(is_disjoint(a, 4, b, 4), 1);
	test_int(is_disjoint(a, 4, c, 1), 1);
	test_int(is_disjoint(b, 4, c, 1), 1);
	test_int(is_disjoint(a, 4, d, 4), 0);
	test_int(is_disjoint(c, 4, d, 4), 0);
	test_int(is_disjoint(d, 4, b, 4), 1);
	test_int(is_disjoint(a, 4, b, 4), 1);
	return (0);
}

