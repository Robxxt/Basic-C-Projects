/*
* Author: Robert Dragan
* Github: nucata
* Date:  30 Sep 2022 15:45:05
* Description: This functions are made to be reused in any other project.
*/

#include <stdlib.h>	//exit
#include <unistd.h>	//write
#include <stdio.h>	//printf

void	b_sort(int *arr, size_t n) {
	int	len = (int) n;
	int	temp;
	int	i = 0;
	int	j;

	while (i < len) {
		j = 0;
		while (j < len - 1) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	test_int(int out, int test) {
	if (out == test) {
		printf("# Test Succeeded!\n\n");
		return (1);
	}
	printf("# Test Failed!\n");
	printf("Out: %d\tTest: %d\n\n", out, test);
	return (0);
}

int	ft_strlen(char *str) {
	int	index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

int	test_str(char *out, char *test) {
	int	index = 0;

	if (ft_strlen(out) != ft_strlen(test)) {
		printf("# Test Failed!\n");
		printf(" Out: %s\nTest: %s\n\n", out, test);
		return (0);
	}
	while (index < ft_strlen(out)) {
		if (out[index] != test[index]) {
			printf("# Test Failed!\n");
			printf(" Out: %s\nTest: %s\n\n", out, test);
			return (0);
		}
		index++;
	}
	printf("# Test Succeeded!\n\n");
	return (1);
}

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putstr(char *str) {
	int	str_len = ft_strlen(str);
	write(1, str, str_len);
}

float	ft_pow(int base, int pow) {
	if (base == 0 && pow == 0)
		return (1);
	else if (base == 0)
		return (0);
	else if (pow == 0)
		return (1);
	else if (base == 1)
		return (1);
	else if (pow > 0)
		return (base * ft_pow(base, pow - 1));
	else if (pow < 0)
		return (1.00 / base * ft_pow(base, pow + 1));
}

void	fail() {
	exit(EXIT_FAILURE);
}

int	is_prime(int n) {
	int	i = 2;

	if (n < i)
		return (0);
	while (i <= (n / 2)) {
		if (n % i == 0)
			return (0);
	}
}
