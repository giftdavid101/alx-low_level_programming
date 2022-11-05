#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 if c lowercase and 0 if c is uppercase
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}

return (0);

}
