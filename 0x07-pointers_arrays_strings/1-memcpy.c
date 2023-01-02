#include "main.h"
/**
*_memcpy - The _memcpy() function copies n bytes
* from memory area src to memory dest
*@dest:area where bytes are cope to
*@src:area where bytes are cope from
*@n:number of bytes to copy
*Return: returns 
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
