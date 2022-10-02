/*
* Author: Robert Dragan
* Github: nucata
* Date: 02-10-2022
* Description: This program reproduce the mathematical exponential behavior.
*/

#include <stdio.h>
#include <math.h>

float	ft_pow(int base, int pow) {
	if (base == 0 && pow == 0)
		return (1);
	else if (base == 0)
		return (0);
	else if (base == 1)
		return (1);
	else if (pow == 0)
		return (1);
	else if (pow > 0)
		return (base * ft_pow(base, pow - 1));
	else if (pow < 0)
		return (1.00 / base * ft_pow(base, pow + 1));
}

int	main(void) {

	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(1, 2), pow(1, 2));
	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(4, 2), pow(4, 2));
	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(-2, 2), pow(-2, 2));
	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(3, -2), pow(3, -2));
	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(1, -4), pow(1, -4));
	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(0, 2), pow(0, 2));
	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(0, 0), pow(0, 0));
	printf("Result: %.2f\tExpected: %.2f\n", ft_pow(1, 0), pow(1, 0));
	return (0);
}

