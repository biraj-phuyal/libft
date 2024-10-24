#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    const unsigned char *s;

    i = 0;
    s = str;
    if (c == '\0')
        return (char *)str;
    while (i < n)
    {
        if (s[i] == (char)c)
            return (void *)(s + i);
        i++;
    }
    return (NULL);
}