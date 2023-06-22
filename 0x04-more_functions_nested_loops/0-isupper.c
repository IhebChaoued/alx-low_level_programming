#include "main.h"
#include <ctype.h>
/**
 * Checks if the given character is uppercase.
 * Returns 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);

	else
		return (0);
}
