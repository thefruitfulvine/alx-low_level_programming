#include "main.h"

/**
 *_strcat - Entry point
 *
 * @dest: destination string
 * @src: source string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 * Return: 1 (Success) or 0 (Failure)
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; dest[i] != '\0'; j++)
		{
			src[i] = dest[j];
		}

		src[i] = '\0';
	}
}