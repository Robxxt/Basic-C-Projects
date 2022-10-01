/*
* Author: Robert Dragan
* Github: nucata
* Date: 01-10-2022 
* Description: Compute a dot product.
*/

#include <stdio.h>	//printf

float	dot_product(float *v1, float *v2, int size) {
	int	i = 0;
	float	result = 0;

	while (i < size) {
		result += v1[i] * v2[i];
		printf("Result: %.2f\n", result);
		i++;
	}
	return (result);
}

int	main(void) {
	float	a[4] = {1, 2, 3, 4};
	float	b[4] = {1, 2, 3, 4};
	float	d_product;
	int	size = (int) sizeof(a) / sizeof(float);

	d_product = dot_product(a, b, size);
	printf("%.2f\n",d_product);
	return (0);
}

