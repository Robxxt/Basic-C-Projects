/*
* Author: Robert Dragan
* Github: nucata
* Date: 30 Sep 2022 17:52:09
* Description: This program does exaclty the same as recursive fibo but avoiding the use of recursion (It's more readable the recursive version).
*/

#include <stdio.h>

int	i_fibo(int i) {
	int	temp;
	int	index = 2;
	int	item = 1;
	int	next_item = 1;

	if (i <= 0)
		return (-1);
	if (i <= 2)
		return (1);
	while (index <= i) {
		temp = next_item;
		next_item = item + next_item;
		item = temp;
		index++;
	}
	return (next_item);
}

int	main(void) {
	printf("%d\n", i_fibo(1));
	printf("%d\n", i_fibo(2));
	printf("%d\n", i_fibo(3));
	printf("%d\n", i_fibo(4));
	printf("%d\n", i_fibo(5));
	printf("%d\n", i_fibo(6));
	printf("%d\n", i_fibo(7));
	return (0);
}

