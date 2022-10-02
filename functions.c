/*
* Author: Robert Dragan
* Github: nucata
* Date:  30 Sep 2022 15:45:05
* Description: This functions are made to be reused in any other project.
*/

#include <stdlib.h>	//exit

void	fail() {
	exit(EXIT_FAILURE);
}

int	ft_strlen(char *str) {
	int	index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
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
