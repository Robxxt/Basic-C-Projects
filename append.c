/*
* Author: Robert Dragan
* Github: nucata
* Date:  
* Description: The append function returns a pointer to a dinamically allocated space that stores the concatenation of two strings. This function is made in order solve the problem of the undefined behavior that strcat has.
* Execution: In order to make the programm to work you need to compile this file with the function.c or change functions.h with <string.h> and ft_strlen with strlen. For the first option you can use gcc, in that case you just need to go to the repo folder and write $gcc append.c function.c (don't copy the $).
*/

#include <stdio.h>	// printf
#include <stdlib.h>	// calloc
#include "functions.h"	// ft_strlen

char	*append(char *str1, char *str2)
{
	int	s1_len = ft_strlen(str1);
	int	s2_len = ft_strlen(str2);
	int	result_size = s1_len + s2_len + 1;
	int	i1 = 0;
	int	i2 = 0;

	char	*result = calloc(result_size, sizeof(char));
	while (i1 < s1_len) {
		result[i1] = str1[i1];
		i1++;
	}
	while (i2 < s2_len) {
		result[i1 + i2] = str2[i2];
		i2++;
	}
	result[i1 + i2] = '\0';
	return (result);
}

int	main(void) {
	char	str1[] = "Hola";
	char	str2[] = "Mundo";
	char	str[] = " ";
	char	*res;

	res = append(str1, str);
	res = append(res, str2);
	printf("%s\n", res);

	free(res);
	return (0);
}

