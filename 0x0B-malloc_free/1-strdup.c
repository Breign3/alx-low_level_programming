#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, a, b;

	a = b = 0;
	if (s1)
	for (; s1[a]; a++)
	;
		if (s2)
		for (; s2[b]; b++)
	;
			if (!(n >= b))
			b = n;

		str = malloc(sizeof(char) * (a + b) + 1);
			if (!str)
			return (NULL);

				for (i = 0; i < (a + b); i++)
					{
					if (i < a)
						str[i] = s1[i];
							else
								str[i] = s2[i - a];
					}

								str[i] = '\0';

		return (str);
}
