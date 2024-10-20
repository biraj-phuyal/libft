#include "libft.h"
#include <stdio.h>

int ft_touuper(int ch)
{
    char c = (char)ch;
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    else
        return (c);
    return (c);
}

int main ()
{
    int c = '9';
    printf("%c", ft_touuper(c));
}