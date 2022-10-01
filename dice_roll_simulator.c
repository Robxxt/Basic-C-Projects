/*
* Author: Robert Dragan
* Github: nucata
* Date:  
* Description: 
*/

#include <stdio.h>	// prinf
#include <stdlib.h>	// srand, rand
#include <unistd.h>	// getpid
#include <time.h>	// time

// Get a random number between 1 and max
int	get_random(int max) {
	// Seeding the random function with the current time and the pid(process id).
	srand( time(NULL) * getpid());
	printf("%d\n", rand());
	return (rand() % max + 1);
}
int	main(void) {
	printf("The dice value is: %d\n", get_random(6));
	return (0);
}

