#include "main.h"
/**
* _strstr - strstr
* @haystack: first string
* @needle: substring
* Return: pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k, m;

	while (haystack[i])
		i++;
	while (needle[j])
		j++;

	for (k = 0; k <= i; k++)
	{
		if (haystack[k] == needle[0])
		{
			for (m = 0; m <= j && k + m < i; m++)
			{
				if (needle[m] != haystack[k + m])
					break;
			}
		}
		if (!needle[m])
			return (&haystack[k]);
	}
	return ('\0');
}
