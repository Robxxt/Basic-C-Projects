/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-2022 
* Description: Checks if a year is leap or not. Returns 1 if yes and 0 if not.
*/

#include <stdio.h>
int	is_leap(int year) {
	if (year % 4 != 0)
		return (0);
	else if (year % 100 != 0)
		return (1);
	else if (year % 400 != 0)
		return (0);
	else
		return (1);
}

int	main(void) {
	printf("res: %d, expected:%d\n", is_leap(2088), 1);
	printf("res: %d, expected:%d\n", is_leap(2084), 1);
	printf("res: %d, expected:%d\n", is_leap(2080), 1);
	printf("res: %d, expected:%d\n", is_leap(2087), 0);
	printf("res: %d, expected:%d\n", is_leap(2081), 0);
	return (0);
}

