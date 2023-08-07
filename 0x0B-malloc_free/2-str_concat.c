#include "main.h"
#include  <stdlib.h>

/**
 * str_concat - function that copy two diffrent arry
 *
 *@s1:original string
 *@s2:original string
 *
 *Return: fail return null, success return string
 */

char *str_concat(char *s1, char *s2)
{
	char *v;
	int n, s1_l = 0, s2_l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_l] != '\0')
		s1_l++;
	while (s2[s2_l] != '\0')
		s2_l++;

	v = malloc(sizeof(char) * (s1_l + s2_l) + 1);
	if (v == NULL)
		return (NULL);

	for (n = 0; n < s1_l; n++)
		v[n] = s1[n];
	for (n = 0; n < s2_l; n++)
		v[s1_l + n] = s2[n];
	v[s1_l + s2_l] = '\0';
	return (v);
}
