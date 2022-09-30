/*
* Author: Robert Dragan
* Github: nucata
* Date: 30 Sep 2022 17:44:57
* Description: This program returns the value of the nth number in the fibonacci sequence. If the number is smaller or equal than zeron, returns an error that is refered as -1.
*/

#include <stdio.h>

int	recursive_fibo(int i) {
	if (i <= 0)
		return (-1);
	if (i == 1 || i == 2)
		return (1);
	return (recursive_fibo(i - 1) + recursive_fibo(i - 2));
}

int	main(void) {
	printf("%d\n", recursive_fibo(3));
	printf("%d\n", recursive_fibo(4));
	printf("%d\n", recursive_fibo(5));
	printf("%d\n", recursive_fibo(-4));
	return (0);
}

