#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings.
 *
 * @s1: string nuber 1
 * @s2: string nuber 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *		of string 2 @s2
 *		or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p1, p2, k, h;
	char *st;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p1 = p2 = 0;
	while (s1[p1] != '\0')
		l1++;
	while (s2[p2] != '\0')
		p2++;

	if (n >= p2)
		n = p2;

	st = (char *) malloc((p1 + n + 1) * sizeof(char));
	if (st == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		st[k] = s1[k];
	for (h = 0; h < n && s2[h] != '\0'; h++)
	{
		st[k] = s2[h];
		k++;
	}
	st[k] = '\0';
	return (st);
}
