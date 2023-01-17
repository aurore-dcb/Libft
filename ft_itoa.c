#include "libft.h"

static size_t int_len(int n)
{
    long int nb;
    size_t len;

    len = 1;
    nb = (long int)n;
    if (nb < 0)
    {
        nb = -nb;
        len++;
    }
    while (nb / 10 > 0)
    {
        len++;
        nb = nb / 10;
    }
    return (len);
}

static char *rev_tab(char *res)
{
    size_t i;
    char tmp;

    i = 0;
    while (i < ft_strlen(res) / 2)
    {
        tmp = res[i];
        res[i] = res[ft_strlen(res) - i - 1];
        res[ft_strlen(res) - i - 1] = tmp;
        i++;
    }
    return (res);
}

char *ft_itoa(int n)
{
    size_t i;
    size_t len;
    long int nb;
    char *res;

    len = int_len(n);
    nb = (long int)n;
    if (n < 0)
        nb = -nb;
    res = malloc(sizeof(char) * len + 1);
    if (!res)
        return (NULL);
    i = 0;
    while (nb / 10 > 0)
    {
        res[i++] = (nb % 10) + '0';
        nb = nb / 10;
    }
    res[i++] = (nb % 10) + '0';
    if (n < 0)
        res[i++] = '-';
    res[i++] = '\0';
    res = rev_tab(res);
    return (res);
}