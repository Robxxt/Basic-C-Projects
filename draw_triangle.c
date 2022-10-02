/*
* Author: Robert Dragan
* Github: nucata
* Date: This program receives the height of a triangle
*	and draws a rectangle triangle with that height.
* Description: 
*/

#include "functions.h"

void	draw_rectangle(int height) {
	int	index =  1;
	int	subindex = 0;

	while (index <= height) {
		subindex = 0;
		while (subindex < index) {
			ft_putchar('#');
			subindex++;
		}
		ft_putchar('\n');
		index++;
	}
}

int	main(void) {
	draw_rectangle(10);
	return (0);
}

