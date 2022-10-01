/*
* Author: Robert Dragan
* Github: nucata
* Date: 01 Okt 2022 12:03:19
* Description: This programm prints the PID(Process ID) of the current program.
*/

#include <stdio.h>	//printf
#include <unistd.h>	//getpid

int	main(void) {
	printf("%d\n", getpid());
	return (0);
}

