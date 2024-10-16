#include "libft.h"
#include <stdio.h>

void *memcpy(void *dest_str, const void *src_str, size_t n)
{
    size_t i;
    char *d;
    const char *s;

    if (dest_str == '\0' && src_str == '\0')
        return (NULL);
    i = 0;
    d = (char *)dest_str;
    s = (const char *)src_str;
    while (n > i)
    {
        d[i] = s[i];
        i++;
    }
    return (dest_str);
}