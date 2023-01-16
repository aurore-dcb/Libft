#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t i;

    res = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!res)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        res[i + ft_strlen(s1)] = s2[i];
        i++;
    }
    res[i + ft_strlen(s1)] = '\0';
    return (res);
}