/*
* Author: Robert Dragan
* Github: nucata
* Date: 03-10-2022
* Description: This program receives an unsigned decimal number and returns a binary string.
*/

#include <stdio.h>	// printf
#include <stdlib.h>	// malloc, realloc
#include "functions.h"	// fail, ft_strlen, test_str

void	reverse_str(char *str) {
	int	len = ft_strlen(str);
	int	index = 0;
	char	tmp;

	while (index < len / 2) {
		tmp = str[index];
		str[index] = str[len - 1 - index];
		str[len - 1 - index] = tmp;
		index++;
	}
}

char	*dec_to_bin(unsigned int num) {
	char	*bin;
	// Final bin size to DMA the end size.
	int	index;

	bin = malloc(256 * sizeof(char));
	if (bin == NULL)
		fail();
	index = 0;
	while (num > 0) {
		bin[index] = num % 2 + '0';
		num = num / 2;
		index++;
	}
	bin[index] = '\0';

	// reallocate size to save space
	bin = realloc(bin, (index + 1) * sizeof(char));
	reverse_str(bin);
	return (bin);
}

int	main(void) {
	char	*bin = dec_to_bin(10);
	char	*bin1 = dec_to_bin(41242141);
	char	*bin2 = dec_to_bin(120);
	char	*bin3 = dec_to_bin(912580);
	char	*bin4 = dec_to_bin(12580912);
	char	*bin5 = dec_to_bin(1);

	test_str(bin, "1010");
	test_str(bin1, "10011101010100111000011101");
	test_str(bin2, "1111000");
	test_str(bin3, "11011110110011000100");
	test_str(bin4, "101111111111100000110000");
	test_str(bin5, "1");
	free(bin);
	free(bin1);
	free(bin2);
	free(bin3);
	free(bin4);
	free(bin5);
	return (0);
}

