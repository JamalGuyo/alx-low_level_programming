#include "main.h"

/**
 * _isupper - fn finding upper and lower case
 * @c: parameter, a character
 */
int _isupper(int c)
{
    if (c > 'a' && c < 'z')
    {
        return (0);
    }
    return (1);
}
