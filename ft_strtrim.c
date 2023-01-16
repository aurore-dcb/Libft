#include "libft.h"

static int in_set(char const *set, const char c)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t indice;
    char *res;

    if (!s1)
        return (ft_strdup(""));
    i = 0;
    indice = 0;
    while (s1[i] && in_set(set, s1[i]) == 1)
    {
        indice++;
        i++;
    }
    i = ft_strlen(s1) - 1;
    while (i > indice && in_set(set, s1[i]) == 1)
        i--;
    res = malloc(sizeof(char) * i - indice + 1);
    if (!res)
        return (NULL);
    res = ft_substr(s1, (unsigned int)indice, i - indice + 1);
    return (res);
}