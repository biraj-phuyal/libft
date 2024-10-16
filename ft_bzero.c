#include "libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char   *a;

    i = 0;
    a = s;
    while (n > i)
    {
        a[i] = 0;
        i++;
    }
}