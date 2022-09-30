/*
* Author: Robert Dragan
* Github: nucata
* Date:   30 Sep 2022 15:48:19
* Description: This program checks if a given string is or not palindrome. If it is returns 1 and prints "Yeey". Else returns 0 and prints "NO, No, n..."
*/

#include <stdio.h>
#include "functions.h"

int	is_palindrome(char *s) {
	int	length = ft_strlen(s);

	for (int i = 0; i < length / 2; i++) {
		if (s[i] != s[length - 1 - i]) {
			printf("NO, No, n...\n");
			return (0);
		}
	}
	printf("Yeey\n");
	return (1);
}

int	main(void) {
	is_palindrome("Holai"); // No...
	is_palindrome("HooH"); // Yeey
	is_palindrome("1221"); // Yeey
	is_palindrome("~~19204"); // No...
	is_palindrome("~~00~~00~~"); // Yeey
	return (0);
}

