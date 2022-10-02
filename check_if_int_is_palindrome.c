/*
* Author: Robert Dragan
* Github: nucata
* Date: 02-10-202-10-20222
* Description: This program checks if a given integer number is palindrome or not. If it is return 1 else 0.
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

int	is_palindrome(int n) {
	if (n == reverse(n))
		return (1);
	return (0);
}

int	main(void) {
	printf("result: %d\texpected: %d\n", is_palindrome(123456789), 0);
	printf("result: %d\texpected: %d\n", is_palindrome(121), 1);
	printf("result: %d\texpected: %d\n", is_palindrome(-121), 1);
	printf("result: %d\texpected: %d\n", is_palindrome(120), 0);
	printf("result: %d\texpected: %d\n", is_palindrome(-120), 0);
	printf("result: %d\texpected: %d\n", is_palindrome(10000001), 1);
	return (0);
}

