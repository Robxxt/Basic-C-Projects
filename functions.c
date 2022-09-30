/*
* Author: Robert Dragan
* Github: nucata
* Date:  30 Sep 2022 15:45:05
* Description: File where I save common used functions in order to reuse them.
*/

int	ft_strlen(char *str) {
	int	index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}
