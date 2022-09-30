/*
* Author: Robert Dragan
* Github: nucata
* Date:  30 Sep 2022 15:45:05
* Description: This functions are made to be reused in any other project.
*/

int	ft_strlen(char *str) {
	int	index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}
