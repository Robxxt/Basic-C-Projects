/*
* Author: Robert Dragan
* Github: nucata
* Date: 02-10-2022
* Description: This programm receives an integer and returns that integer reversed.
*/

#include <stdio.h>

int	reverse(int n) {
	int	res = 0;
	int	mod;

	while (n != 0) {
		mod = n % 10;
		res = res * 10 + mod;
		n = n / 10;
	}
	return (res);
}

int	main(void) {
	printf("reverse(%d): %d\n", 121, reverse(121));
	printf("reverse(%d): %d\n", 321, reverse(321));
	printf("reverse(%d): %d\n", 123, reverse(123));
	printf("reverse(%d): %d\n", 120, reverse(120));
	printf("reverse(%d): %d\n", 1000001, reverse(1000001));
	return (0);
}

