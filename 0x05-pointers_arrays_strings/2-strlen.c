#include "main.h"
/**
 * _strlen - returns the length of the string
 * @S: String
 * Return: length
 */
int _strlen(char *S)
{
	int longi = 0;

	while (*S != '\0')
	{
		longi++;
		S++;
	}

	return (longi);
}
