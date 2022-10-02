/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-2022  
* Description: Adds two vectors. Both vectors must have the same dimentions.
*/

#include <stdio.h>	//prinf
#include <stdlib.h>	//malloc
#include "functions.h"	//fail

float	*add_vector(float *v1, float *v2, int size) {
	float	*v3 = malloc(size * sizeof(float));
	int	index = 0;

	if (v3 == NULL) fail();
	while (index < size) {
		v3[index] = v1[index] + v2[index];
		index++;
	}
	return (v3);
}

int	main(void) {
	float	a[] = {1, 2, 3, 4};
	float	b[] = {1, 2, 3, 4};
	int	size = (int) sizeof(a) / sizeof(float);
	float	*c;

	c = add_vector(a, b, size);
	for (int i = 0; i < size; i++)
		printf("%.2f\n", c[i]);
	return (0);
}

