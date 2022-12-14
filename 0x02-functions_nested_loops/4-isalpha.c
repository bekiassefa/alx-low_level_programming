#include "main.h"

/**
 * _isalpha - controls if a character is alphabetical
 * @c: character to be verified
 * Return: return 0 or 1
 */
int _isalpha(int a)
{
if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
return (1);

return (0);
}
