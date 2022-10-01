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
	while (i <= (n / 2)) {
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void) {
	printf("Number: %d\tResult: %d\tExpected: %d\n", 36643, is_prime(36643), 1);
	return (0);
}

