#include "main.h"

/**
 * _isalpha - Checks if the character is alphabetic
 * @@ -12,24 +10,10 @@
 */

int _isupper(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
