/*
* Author: Robert Dragan
* Github: nucata
* Date: 01.10.2022  
* Description: This program receives a string and reverses lowercase characters to uppercase and vice-versa.
*/

#include <stdio.h>


void	flip(char *str) {
	int	index;

	while (str[index] != '\0') {
		// Check if the char is alphabetic lowecase, if yes, it flips it
		if (str[index] <= 122 && str[index] >= 97)
			str[index] -= 32;
		// Check if the char is alphabetic uppercase, if yes, it flips it
		else if (str[index] <= 90 && str[index] >= 65)
			str[index] += 32;
		index++;
	}
}

int	main(void) {
	char	str[] = "Hi1~ % World";
	
	printf("Original:\n %s\n\n", str);
	flip(str);
	printf("After fliping:\n %s\n", str);
	return (0);
}

