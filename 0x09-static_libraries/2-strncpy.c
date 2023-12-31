#include "main.h"

/**
* _strncpy - copy first n chars to the str/str = new
* @dest: first string
* @src: second string
* @n: size
* Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
