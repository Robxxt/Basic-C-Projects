/*
* Author: Robert Dragan
* Github: nucata
* Date: 02-10-2022
* Description: This program searches for child strings within a parent string.
* When finds one occurence it returns 1. Otherwise 0.
*/

#include <stdio.h>
#include "functions.h"

int	is_substr(char *str, char *substr) {
	int	str_len = ft_strlen(str);
	int	substr_len = ft_strlen(substr);
	int	i = 0;
	int	j = 0;
	
	while (i <= str_len - substr_len) {
		j = 0;
		while (j < substr_len) {
			if (str[i + j] == substr[j])
				j++;
			else
				break;
		}
		if (j == substr_len)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv) {
	char *str = argv[1];
	char *substr = argv[2];

	if (argc != 3)
		return (2);
	printf("Has \"%s\"\nThe sub-string: \"%s\"\n\n", str, substr);
	printf("Result: %d\n", is_substr(str, substr));
	return (0);
}

