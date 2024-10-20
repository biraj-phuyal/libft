#include "libft.h"

int ft_tolower(int ch)
{
    char c = (char)ch;
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    else
        return (c);
    return (c);
}