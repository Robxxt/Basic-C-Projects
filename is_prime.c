/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-2022 
* Description: This program checks weather a number is prime or not by checking each number reminder. If it is prime return 1 else 0.
*/

#include <stdio.h>

int	is_prime(int n) {
	int	i = 2;

	if (n < i)
		return (0);
	while (i < n) {
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void) {
	printf("Number: %d\tResult: %d\tExpected: %d\n", 10, is_prime(10), 0);
	printf("Number: %d\tResult: %d\tExpected: %d\n", 1, is_prime(1), 0);
	printf("Number: %d\tResult: %d\tExpected: %d\n", -1,is_prime(-1), 0);
	printf("Number: %d\tResult: %d\tExpected: %d\n", 15, is_prime(15), 0);
	printf("Number: %d\tResult: %d\tExpected: %d\n", 7, is_prime(7), 1);
	printf("Number: %d\tResult: %d\tExpected: %d\n", 41, is_prime(41), 1);
	printf("Number: %d\tResult: %d\tExpected: %d\n", 5, is_prime(5), 1);
	printf("Number: %d\tResult: %d\tExpected: %d\n", 91, is_prime(91), 1);
	return (0);
}

