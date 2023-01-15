#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *res;
    size_t len;

    len = ft_strlen(s1) + 1;
    res = malloc(sizeof(char) * len);
    if (!res)
        return (0);
    res = ft_memcpy(res, s1, len);
    return (res);
}