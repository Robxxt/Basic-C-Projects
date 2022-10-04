/*
* Author: Robert Dragan
* Github: nucata
* Date: 04-10-2022
* Description: Bubble Sort Algorithm implementation
*/

#include <stdio.h>

void	b_sort(int *arr, size_t n) {
	int	len = (int) n;
	int	temp;
	int	i = 0;
	int	j;

	while (i < len) {
		j = 0;
		while (j < len - 1) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void) {
	int	a[] = {2, 1, 3, 0, 9, 7, 0, 5, 10, 240};
	size_t	s = sizeof(a) / sizeof(int);

	b_sort(a, s);
	for (int i = 0; i < (int) s; i++)
		printf("%d, ", a[i]);
	return (0);
}

