/**
 * _memcpy - Copies memory are
 * @dest: Pointer to the destinatio memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory area (dest)
 * or NULL if an error occurs
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
