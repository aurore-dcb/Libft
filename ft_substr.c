#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *res;

    if (!s)
        return (NULL);
    if ((size_t)start > ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen (s) - start;
    res = malloc(sizeof(char) * len + 1);
    if (!res)
        return (NULL);
    i = start;
    j = 0;
    while (i < ft_strlen(s) && j < len)
    {
        res[j++] = s[i++];
    }
    res[j] = '\0';
    return (res);
}