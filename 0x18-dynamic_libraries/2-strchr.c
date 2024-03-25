#include "main.h"
#include <stdio.h>

/**
 *  *_strchr - locates a character in a string
 *  @s:the string to be searched.
 *  @c:an input character to locate into string s
 *  Return:  a pointer to the first occurance of the character @c in the string
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
return (s);
s++;
}

if (c == '\0')
return (s);

return (NULL);

}
