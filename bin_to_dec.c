/*
* Author: Robert Dragan
* Github: nucata
* Date: 02-10-2022 
* Description: Receives a binary input and returns it's decimal value.
*/

#include <stdio.h>	//printf
#include "functions.h"	//ft_strlen, ft_pow, fail

int	test(int res, int expected) {
	if (res == expected) {
		printf("Test Succeed ;)\n\n");
		return (1);
	}
	else {
		printf("Test Failed!\n");
		printf("Output: %d\tExpected: %d\n\n", res, expected);
		return (0);
	}
}

int	bin_to_dec(char *str) {
	int	res = 0;
	int	end = ft_strlen(str) - 1;
	int	index = 0;
	
	while (index <= end) {
		if (str[index] == '1')
			res += ft_pow(2, end - index);
		index++;
	}
	return (res);
}

int	main(void) {
	test(bin_to_dec("1"), 1);
	test(bin_to_dec("11"), 3);
	test(bin_to_dec("1111"), 15);
	test(bin_to_dec("1000"), 8);
	test(bin_to_dec("11111111"), 255);
	test(bin_to_dec("0"), 0);
	test(bin_to_dec("0010"), 2);
	return (0);
}

