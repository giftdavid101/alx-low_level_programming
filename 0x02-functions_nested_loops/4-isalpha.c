#include "main.h"
/**
 * _isalpha - checks for alphabetic either lower or uppercase
 * @c: It is the character to be checked
 * Return: 1 if he the character is a lower case , uppercase or letter
 * and 0 if other wise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

{
return (1);
}
return (0);
}
