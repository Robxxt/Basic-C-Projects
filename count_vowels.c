/*
* Author: Robert Dragan
* Github: nucata
* Date: 30 Sep 2022 18:06:20
* Description: This program returns the amount of vowels that a string has.
*/

#include <stdio.h>

int	count_vowels(char str[]) {
	int	index = 0;
	int	counter = 0;

	while (str[index] != '\0') {
		switch (str[index]) {
			case ('a'):
			case ('e'):
			case ('i'):
			case ('o'):
			case ('u'):
			case ('A'):
			case ('E'):
			case ('I'):
			case ('O'):
			case ('U'):
				counter++;
				break;
		}
		index++;
	}
	return (counter);
}
int	main(void) {
	printf("Result: %d\n", count_vowels("Hola"));
	printf("Test: %d\n\n", 2);
	printf("Result: %d\n", count_vowels("Hola Mundo"));
	printf("Test: %d\n\n", 4);
	printf("Result: %d\n", count_vowels("HOla"));
	printf("Test: %d\n\n", 2);
	printf("Result: %d\n", count_vowels(""));
	printf("Test: %d\n\n", 0);
	printf("Result: %d\n", count_vowels("y"));
	printf("Test: %d\n\n", 0);
	return (0);
}

