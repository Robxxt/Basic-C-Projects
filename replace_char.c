/*
* Author: Robert Dragan
* Github: nucata
* Date:  
* Description: 
*/

#include <stdio.h>

void	replace_char(char *str, char a, char b) {
	int	index = 0;
	
	while (str[index] != '\0') {
		if (str[index] == a)
			str[index] = b;
		index++;
	}
}

int	main(void) {
	char str[] = "There are more things to be discovered!";

	printf("Before: \"%s\"\n", str);
	replace_char(str, 'h', '@');
	printf("After: \"%s\"\n", str);
	return (0);
}

