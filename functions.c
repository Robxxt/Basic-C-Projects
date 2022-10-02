/*
* Author: Robert Dragan
* Github: nucata
* Date:  30 Sep 2022 15:45:05
* Description: This functions are made to be reused in any other project.
*/

#include <stdlib.h>	//exit
#include <unistd.h>	//write

int	ft_strlen(char *str) {
	int	index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
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
