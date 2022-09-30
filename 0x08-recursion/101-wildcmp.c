#include "main.h"
/**
 * wildcmp - compare two strings with possible wildcards
 * @s1: string
 * @s2: string
 * Return:int 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, (s2 + 1)));
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, (s2 + 1)));
		else if (wildcmp(s1, s2 + 1))
			return (1);
		else
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
