#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *str, int search_str)
{
    if (search_str == '\0')
        return (char *)str;
    
    while (*str)
    {
        if (*str == (char)search_str)
            return (char *)str;
        str++;
    }
    return (NULL);
}